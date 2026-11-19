#include <iostream>

int main() {
    int number{};
    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << "The number is even.\n";
    } else {
        std::cout << "The number is odd.\n";
    }

    for (int i = 1; i <= 5; ++i) {
        std::cout << i << " squared is " << i * i << '\n';
    }
}

