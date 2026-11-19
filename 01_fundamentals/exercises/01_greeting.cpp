#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // TODO: Print: Hello, <name>! Welcome to C++.
    std::cout<<"Hello, %s! Welcome to C++.", name;
    // TODO: Handle an empty name with a useful message.
}
