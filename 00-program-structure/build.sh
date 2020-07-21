#!/usr/bin/env bash
# Exit on first error, unset variable, or pipe failure
set -euo pipefail

# Build our program
g++ main.cpp -o main.out
