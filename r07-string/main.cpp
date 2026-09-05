#include <iostream>
#include "funciones.hpp"

int main() {
    std::string texto = "hola mundo";

    std::cout << "palabras: " << contarPalabras(texto) << '\n'; 
    std::cout << "volteado: " << voltear(texto) << '\n';      

    return 0;
}