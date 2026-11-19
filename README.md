# C++ From Beginner to Expert

This repository is a practical, project-based path for learning modern C++.
Work through the folders in order. Read the local `README.md`, type the
examples yourself, and complete the exercises before moving on.

## Requirements

- A C++ compiler with C++20 support:
  - Windows: Visual Studio 2022 or MinGW-w64
  - Linux: GCC 11+ or Clang 14+
  - macOS: Apple Clang with C++20 support
- CMake 3.20+ (recommended)
- Git
- A debugger (Visual Studio, VS Code, or GDB/LLDB)

## Build every example

```text
cmake -S . -B build
cmake --build build
```

Run an individual target from the build output. You can also compile a single
file while learning:

```text
g++ -std=c++20 -Wall -Wextra -Wpedantic file.cpp -o program
```

On Windows with Visual Studio, use the Developer PowerShell and replace the
command with `cl /std:c++20 /W4 file.cpp`.

## How to study

1. Read the stage README and write down the learning goals.
2. Run the example before changing it.
3. Make one deliberate change and predict the result.
4. Complete each exercise without copying the example.
5. Commit your work after each lesson.
6. When stuck, reduce the problem to a small program and use the debugger.
7. Record your work in [notes.txt](C:/dumps/learning_cpp/notes.txt) and copy
   [daily-study-template.txt](C:/dumps/learning_cpp/daily-study-template.txt)
   for each study session.

Exercise starter files are in each stage's `exercises` folder. They are
intentionally incomplete: read the TODO comments, implement the behavior, and
then record what you learned.

## Roadmap

| Stage | Topic |
|---|---|
| 00 | Tool setup and workflow |
| 01 | Fundamentals, control flow, and functions |
| 02 | Types, memory, strings, and files |
| 03 | Classes, RAII, inheritance, and polymorphism |
| 04 | STL containers, algorithms, iterators, and ranges |
| 05 | Modern C++: lambdas, smart pointers, move semantics, concurrency |
| 06 | Templates, concepts, and generic design |
| 07 | Testing, tooling, architecture, and performance |
| 08 | Advanced systems programming and undefined behavior |
| 09 | Capstone projects |

There is no single definition of “expert”. Aim to explain your choices,
measure performance, write maintainable code, and understand trade-offs.

