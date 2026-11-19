# 05 - Modern C++ (C++17/C++20)

## Goals

Master structured bindings, `auto`, `constexpr`, lambdas, `std::optional`,
`std::variant`, smart pointers, move semantics, views, threads, mutexes,
futures, and coroutines as an introduction.

## Exercises

Use the starter files in `exercises/`.

1. Replace error sentinel values with `std::optional`.
2. Model a parser result with `std::variant`.
3. Refactor an owning raw pointer to `std::unique_ptr`.
4. Write a move-aware buffer and observe moved-from states.
5. Implement a thread-safe counter.
6. Build a producer/consumer queue with condition variables.
7. Use `std::async` to parallelize independent calculations.

Starter files:

- `01_optional_parser.cpp`
- `02_unique_ptr.cpp`
- `03_threaded_counter.cpp`

## Safety rule

Do not use `std::thread` without a clear join or ownership strategy. Prefer
`std::jthread` for new C++20 code.

