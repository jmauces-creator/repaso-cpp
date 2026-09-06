#include "intercambiar.cpp"
#include <iostream>


int main(){
    int x = 1, y = 2;

    intercambiar1(x, y);
    std::cout << "Valor: " << x << ' '<< y << "\n";

    x = 1, y = 2;
    intercambiar2(&x, &y);
    std::cout << "Valor: " << x << ' '<< y << "\n";

    x = 1, y = 2;
    intercambiar3(x, y);
    std::cout << "Valor: " << x << ' '<< y << "\n";

}