#include <iostream>
#include <string>
#include <limits>

void limpiarLinea(){
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int leerEnRango(const std::string& msg, int lo, int hi){
    int n = 0;
    while (true){
        std::cout<< msg;
        bool ok = static_cast<bool>(std::cin >> n);
        limpiarLinea();
        if (ok && n >= lo && n <= hi) return n;
        std::cout << "Numero invalido \n";

    }

}

