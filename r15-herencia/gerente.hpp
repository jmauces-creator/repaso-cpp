#pragma once
#include <iostream>
#include "empleado.hpp"

class Gerente : public Empleado {
public:
    Gerente(const std::string& nombre, double sueldo, int equipo)
        : Empleado(nombre, sueldo), equipo_(equipo) {
        std::cout << "Gerente\n";
    }
    ~Gerente() {
        std::cout << "~Gerente\n";
    }

private:
    int equipo_;
};
