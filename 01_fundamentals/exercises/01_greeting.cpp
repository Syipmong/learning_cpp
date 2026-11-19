#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.empty()) {
        std::cout << "Please enter a non-empty name.\n";
        return 1;
    }

    std::cout << "Hello, " << name << "! Welcome to C++.\n";
}
