#include "cuenta.h"
#include <iostream>

int main(){
    Cuenta pepe;

    pepe.depositar(1000);
    std::cout << "Monto depositado con exito";
    return 0;
}

// El error es el no crear un archivo cuenta.cpp quecontenga el cuerpo de los metodos