#pragma once
#include <iostream>
#include <string>

class Sesion {
public:
    Sesion() : nombre("sin nombre") {
        std::cout << "Sesion(" << nombre << ")\n";
    }

    Sesion(std::string n) : nombre(n) {
        std::cout << "Sesion(" << nombre << ")\n";
    }

    Sesion(std::string n, int extra) : nombre(n) {
        std::cout << "Sesion(" << nombre << ", " << extra << ")\n";
    }

    ~Sesion() {
        std::cout << "~Sesion(" << nombre << ")\n";
    }

private:
    std::string nombre;
};