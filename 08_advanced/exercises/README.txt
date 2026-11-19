ADVANCED EXERCISE SPECIFICATIONS
================================

01_undefined_behavior:
Write five tiny programs containing different forms of undefined behavior.
Document why each is invalid, observe it with tools where possible, and fix it.

02_binary_serializer:
Serialize integers and strings with an explicit byte order and length format.
Test truncated, oversized, and malformed input.

03_cache_benchmark:
Compare row-major and column-major traversal of a matrix. Record compiler,
hardware context, input sizes, and repeated measurements.

04_cancellable_pipeline:
Design a producer/consumer pipeline with cancellation. Document ownership,
shutdown behavior, and what happens when a worker fails.
