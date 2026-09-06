#include "punto.h"
#include <iostream>


int main(){
    double p1 = 3, p2 = 4;

    Punto om;
    Punto p(p1,p2);

    std::cout << "Distancia al origen: \n";
    p.imprimir();

}