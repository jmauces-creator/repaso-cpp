#pragma once
#include <string>

class Figura {
public:
    virtual double area() const = 0;
    virtual std::string nombre() const = 0;
    virtual ~Figura() = default;
};
