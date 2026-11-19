#include <iostream>
#include <memory>

struct Report {
    void print() const { std::cout << "Report\n"; }
};

int main() {
    // TODO: Create a Report with make_unique.
    // TODO: Transfer ownership to a second unique_ptr.
    // TODO: Explain why copying unique_ptr is not allowed.
}
