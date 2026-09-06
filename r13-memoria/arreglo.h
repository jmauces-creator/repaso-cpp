#pragma once
#include <iostream>

class Arreglo {
    int* datos;
    int n;
public:
    Arreglo(int tam) : datos(new int[tam]), n(tam) {
        std::cout << "reservo " << datos << "\n";
    }

    Arreglo(const Arreglo& otro) : datos(new int[otro.n]), n(otro.n) {
        std::cout << "copio " << datos << "\n";
        for (int i = 0; i < n; ++i) datos[i] = otro.datos[i];
    }

    Arreglo& operator=(const Arreglo& otro) {
        if (this == &otro) return *this;
        delete[] datos;
        n = otro.n;
        datos = new int[n];
        for (int i = 0; i < n; ++i) datos[i] = otro.datos[i];
        return *this;
    }

    ~Arreglo() {
        std::cout << "libero " << datos << "\n";
        delete[] datos;
    }

    void set(int i, int v) { datos[i] = v; }
    int get(int i) const { return datos[i]; }
    int tam() const { return n; }
};