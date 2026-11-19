#include <concepts>
#include <iostream>

template <typename T>
concept Printable = requires(T value) {
    std::cout << value;
};

template <Printable T>
void print_value(const T& value) {
    // TODO: Print a value followed by a newline.
    (void)value;
}

int main() {
    // TODO: Test with a printable type and explain the constraint.
}
