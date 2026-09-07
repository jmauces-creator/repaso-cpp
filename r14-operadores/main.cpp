#include "fraccion.h"
#include <iostream>

int main() {
    Fraccion a(1, 2);
    Fraccion b(1, 3);
    std::cout << (a + b) << "\n"; // 5/6

    Fraccion c(6, -8);
    std::cout << c << "\n"; //-3/4

    Fraccion d(1, 2);
    Fraccion e(2, 4);
    std::cout << std::boolalpha << (d == e) << "\n"; // equivalentes

    Fraccion f(1, 3);
    std::cout << std::boolalpha << (f < d) << "\n"; // 1/3 < 1/2

    std::cout << (a * b) << "\n";   //1/6
}