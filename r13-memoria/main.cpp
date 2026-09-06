#include "arreglo.h"
#include <iostream>

int main() {
    Arreglo a(3);
    a.set(0, 10);
    Arreglo b = a;
    b.set(0, 99);
    std::cout << "a[0] = " << a.get(0) << "\n";
    std::cout << "b[0] = " << b.get(0) << "\n";
}