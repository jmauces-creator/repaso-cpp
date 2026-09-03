#include <iostream>
#include "funciones.hpp"
#include <vector>

int main(){
    auto [suma, numeroMat] = obtenerNotas();
    double promedio = prom(suma, numeroMat);
    aporbado(promedio);
    return 0;


}