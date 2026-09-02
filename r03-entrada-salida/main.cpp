#include <iostream>
#include <limits>
#include "leer_rango.hpp"

int main(){
    std::string msg = "Ingrese un numero del 1 al 100: ";
    int lo = 1;
    int hi = 100;

    int valor = leerEnRango(msg, lo, hi);
    std::cout << "Valor leído: " << valor;
    return 0;

}