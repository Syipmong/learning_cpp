# 08 - Advanced and systems topics

Study these only after the earlier stages are comfortable.

## Topics

- Object lifetime, alignment, strict aliasing, and undefined behavior
- Allocators and custom memory resources
- ABI, linking, shared libraries, and symbol visibility
- Networking and serialization
- Lock-free programming and the C++ memory model
- Coroutines and asynchronous design
- Compiler-generated code, assembly inspection, and cache behavior
- Security: validation, integer overflow, injection, and safe parsing

## Exercises

Read the specifications in `exercises/` before writing code. These exercises
are deliberately open-ended and should include benchmarks or tests.

1. Find and fix deliberate undefined behavior in small programs.
2. Implement a monotonic arena allocator and test its lifetime contract.
3. Build a binary serializer with explicit endianness.
4. Benchmark cache-friendly and cache-unfriendly matrix traversal.
5. Create a cancellable coroutine-based task pipeline.

Read authoritative references and measure behavior; never infer guarantees from
one compiler run.

