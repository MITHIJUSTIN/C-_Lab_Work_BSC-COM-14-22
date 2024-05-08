#include "Square.h"

using namespace shapes;

Square::Square() {
    sideLength = 0.0;
}

Square::Square(double side) {
    sideLength = side;
}

Square::~Square() {
    // Destructor implementation
}

double Square::getSideLength() const {
    return sideLength;
}

// Other member function implementations
