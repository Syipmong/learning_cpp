#include <iostream>

int square(int value) {
    return value * value;
}

int main() {
    const int value{7};
    std::cout << square(value) << '\n';
}

