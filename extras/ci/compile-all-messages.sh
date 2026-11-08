#!/usr/bin/env bash
# Compiles CANApi with every message in src/generated/CanApi.hpp enabled for reading and writing, plus
# PROCESS_ALL_MSG. It compiles without linking, so no processMessage() definitions are needed.
#
#   CXX       compiler (default avr-g++)
#   CXXFLAGS  flags (default: Arduino Mega 2560 flags, warnings as errors)
#   INCLUDES  -I flags for mcp2515.h and what it includes (SPI.h, Arduino.h)
#
# Locally, with CANTranslator's stub MCP2515 library and the laptop compiler:
#   CXX=g++ CXXFLAGS="-std=gnu++11 -Wall -Werror" INCLUDES="-I ../CANTranslator/Tests/stubs" extras/ci/compile-all-messages.sh
set -euo pipefail

root="$(cd "$(dirname "$0")/../.." && pwd)"
CXX="${CXX:-avr-g++}"
CXXFLAGS="${CXXFLAGS:--mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10819 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR -std=gnu++11 -Os -fno-exceptions -fno-threadsafe-statics -Wall -Werror}"
INCLUDES="${INCLUDES:-}"

work="$(mktemp -d)"
trap 'rm -rf "$work"' EXIT

messages="$(grep -ho '^#ifdef USE_MSG_[A-Za-z0-9_]*' "$root/src/generated/CanApi.hpp" | cut -d' ' -f2 | sort -u)"
{
	for m in $messages; do echo "#define $m 0b11"; done
	echo "#define PROCESS_ALL_MSG"
} > "$work/UseMsgList.hpp"
echo "Compiling with $(echo "$messages" | wc -l) messages enabled, using $CXX"

for source in src/CANHelper.cpp src/generated/CanApi.cpp; do
	# shellcheck disable=SC2086  # CXXFLAGS and INCLUDES are lists of flags
	"$CXX" $CXXFLAGS -I "$work" $INCLUDES -c "$root/$source" -o "$work/$(basename "$source").o"
	echo "  $source: OK"
done
