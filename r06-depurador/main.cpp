#include <iostream>
#include "funciones.hpp"

int suma(const int v[], int n);
int pares(const int v[], int n);
int maximo(const int v[], int n);

int main(){
    int datos[] = {3, 7, 2, 9, 4};
    int n= 5;

    int s = suma(datos, n);
    int p = pares(datos, n);
    int m = maximo(datos, n);
    
    std::cout << "la suma es: " << s << "\n";
    std::cout << "Los pares son: " << p << "\n";
    std::cout << "El maximo es: " << m << "\n";
    return 0;

}