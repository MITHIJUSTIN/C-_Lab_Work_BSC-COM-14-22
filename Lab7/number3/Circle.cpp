#include "Circle.h"

using namespace shapes;

Circle::Circle() {
    radius = 0.0;
}

Circle::Circle(double r) {
    radius = r;
}

Circle::~Circle() {
    // Destructor implementation
}

double Circle::getRadius() const {
    return radius;
}

// Other member function implementations
