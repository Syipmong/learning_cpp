ENGINEERING EXERCISES
=====================

Create a separate subfolder for each task:

01_testing:
  Pick an earlier exercise. Add unit tests for normal, boundary, and invalid
  input. Build tests from CMake and make them pass from a clean build folder.

02_sanitizers:
  Create a deliberately unsafe small program, run it with sanitizers if your
  compiler supports them, then fix the lifetime or bounds error.

03_library:
  Move one exercise into include/, src/, and tests/. Export a small public API
  and keep implementation details private.

04_benchmark:
  Compare two implementations, record input size and compiler settings, and
  report measurements rather than guesses.
