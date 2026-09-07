#pragma once
#include <iostream>
#include <string>

class Persona {
public:
    Persona(const std::string& nombre) : nombre_(nombre) {
        std::cout << "Persona(" << nombre_ << ")\n";
    }
    ~Persona() {
        std::cout << "~Persona\n";
    }

protected:
    std::string nombre_;
};
