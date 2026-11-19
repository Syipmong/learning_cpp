# 02 - Core C++ and the standard library

## Goals

Understand references, pointers, arrays, `std::string`, `std::vector`,
structures, enums, exceptions, file streams, and const-correctness.

## Exercises

Use the starter files in `exercises/`.

1. Rewrite a raw array program using `std::array`.
2. Remove duplicate values from a `std::vector`.
3. Parse a sentence and count words.
4. Read a text file and report lines, words, and characters.
5. Create a `Book` struct and sort books by title and year.
6. Use exceptions to reject invalid temperature and date values.
7. Implement a command-line contact list saved to a file.

Starter files:

- `01_vector_stats.cpp`
- `02_word_counter.cpp`
- `03_contact_list.cpp`

## Rules

Prefer standard library types over owning raw pointers. Every pointer exercise
must document who owns the pointed-to object and how long it remains valid.

