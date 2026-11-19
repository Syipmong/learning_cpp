#include <iostream>

class Money {
public:
    Money(int dollars, int cents) : cents_(dollars * 100 + cents) {}

    // TODO: Reject invalid construction if your design requires it.
    // TODO: Add arithmetic, comparison, and formatted output.
    int cents() const { return cents_; }

private:
    int cents_{};
};

int main() {
    Money price{12, 50};
    std::cout << price.cents() << " cents\n";
}
