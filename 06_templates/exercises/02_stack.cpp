#include <cstddef>
#include <iostream>
#include <stdexcept>

template <typename T, std::size_t Capacity>
class Stack {
public:
    void push(const T& value) {
        // TODO: Reject pushes when full.
        (void)value;
    }

    T pop() {
        // TODO: Reject pops when empty and return the top value otherwise.
        throw std::out_of_range("stack is empty");
    }
};

int main() {
    Stack<int, 3> values;
    // TODO: Push and pop values, including both error cases.
}
