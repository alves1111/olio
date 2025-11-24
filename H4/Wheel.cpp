#include "Wheel.h"

Wheel::Wheel() : size(0), type("") {}

Wheel::Wheel(int s, const string& t)
    : size(s), type(t) {}

int Wheel::getSize() const {
    return size;
}

void Wheel::setSize(int s) {
    size = s;
}

string Wheel::getType() const {
    return type;
}

void Wheel::setType(const string& t) {
    type = t;
}
