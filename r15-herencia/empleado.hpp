#pragma once
#include <iostream>
#include "persona.hpp"

class Empleado : public Persona {
public:
    Empleado(const std::string& nombre, double sueldo)
        : Persona(nombre), sueldo_(sueldo) {
        std::cout << "Empleado\n";
    }
    ~Empleado() {
        std::cout << "~Empleado\n";
    }

protected:
    double sueldo_;
};
