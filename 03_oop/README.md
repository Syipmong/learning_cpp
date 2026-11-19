# 03 - Object-oriented design and resource management

## Goals

Learn class invariants, constructors, access control, composition,
inheritance, virtual functions, interfaces, RAII, operator overloads, and
copy/move behavior.

## Exercises

Use the starter files in `exercises/`.

1. Design a `Money` value type that prevents invalid cents.
2. Implement a `Date` class with validation and comparisons.
3. Build a `BankAccount` with a clear invariant and transaction history.
4. Create a polymorphic shape hierarchy and calculate total area.
5. Implement a small `Logger` that owns a file resource using RAII.
6. Write a deep-copying `Matrix` class and test copy independence.

Starter files:

- `01_money.cpp`
- `02_bank_account.cpp`
- `03_shapes.cpp`

## Design checklist

Prefer composition over inheritance. Make destructors virtual in polymorphic
base classes. Keep classes small, make invalid states unrepresentable, and
follow the Rule of Zero whenever possible.

