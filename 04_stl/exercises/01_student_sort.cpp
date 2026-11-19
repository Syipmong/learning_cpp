#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct Student {
    std::string name;
    int grade{};
};

int main() {
    std::vector<Student> students{{"Mina", 82}, {"Alex", 95}, {"Bo", 95}};
    // TODO: Sort by descending grade, then ascending name.
    // TODO: Print the result using a range-based loop.
}
