#include "doble.h"
#include <iostream>

int usaEnA();

int main() {
    std::cout << doble(5) << " " << usaEnA() << "\n";
} // El error está en que doble.h se usa 2 veces, se puede separar la definicion de la implementación o usar inline en el .h