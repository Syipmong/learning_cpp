#include <iostream>
#include <memory>
#include <vector>

class Shape {
public:
    virtual ~Shape() = default;
    virtual double area() const = 0;
};

int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    // TODO: Add Circle and Rectangle classes.
    // TODO: Store them polymorphically and calculate total area.
    std::cout << "Implement the shape hierarchy.\n";
}
