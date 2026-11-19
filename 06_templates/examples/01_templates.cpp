#include <concepts>
#include <iostream>

template <std::totally_ordered T>
T maximum(T left, T right) {
    return left < right ? right : left;
}

int main() {
    std::cout << maximum(3, 8) << '\n';
    std::cout << maximum(2.5, 1.5) << '\n';
}

