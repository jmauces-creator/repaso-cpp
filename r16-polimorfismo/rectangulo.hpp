#pragma once
#include "figura.hpp"

class Rectangulo : public Figura {
public:
    Rectangulo(double a, double b) : a_(a), b_(b) {}

    double area() const override { return a_ * b_; }
    std::string nombre() const override { return "Rectangulo"; }

private:
    double a_, b_;
};
