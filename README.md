# learn-cpp-playground
A playground environment to learn and explore C++

## Getting started
To run our repository locally, run the following:

```bash
# Clone our repository
git clone https://github.com/twolfson/learn-cpp-playground
cd learn-cpp-playground

# Install our dependencies
./install.sh

# Run a folder
02-variable-declaration/build-and-run.sh

# Note: Some folders are intentionally built to fail
# This is part of the learning process, seeing how things break
```

## Process to date
- Read through [cplusplus.com's tutorial](https://www.cplusplus.com/doc/tutorial/introduction/) and took notes in
  - Folders 00-19 are based on this
- Played around with [Codewars](https://www.codewars.com/) to get some "oh, I wouldn't have thought of that" moments
- Play around with data structures and multiple files to figure out C++ nuances (e.g. garbage collection, testing, syntax)
  - Used `valgrind` for checking memory leaks, apparently we did well first time o_o
  - Can only find out initial stack size via `RAMEND` which will be tricky for electronics. Not as detailed as I'd like, https://arduino.stackexchange.com/a/65353

## Unlicense
As of Jul 21 2020, Todd Wolfson has released this repository and its contents to the public domain.

It has been released under the [UNLICENSE][].

[UNLICENSE]: UNLICENSE
