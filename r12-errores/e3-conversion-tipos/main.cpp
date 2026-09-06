#include <iostream>
#include <string>

int doble (int n) { return 2 * n;}

int main(){

    std::string s = "hola";
    std::cout << "El doble es: " << doble(s) << "\n"; //recibe un string en lugar de un entero
}

