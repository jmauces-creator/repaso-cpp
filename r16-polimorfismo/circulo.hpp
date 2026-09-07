#pragma once
#include "figura.hpp"

class Circulo : public Figura {
public:
    explicit Circulo(double r) : r_(r) {}

    double area() const override { return 3.14159 * r_ * r_; }
    std::string nombre() const override { return "Circulo"; }

private:
    double r_;
};
