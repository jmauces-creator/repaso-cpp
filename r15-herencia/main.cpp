#include <iostream>
#include "gerente.hpp"

int main() {
    std::cout << "--- inicio ---\n";
    { Gerente g("Ana", 1000, 5); }
    std::cout << "--- fin ---\n";
    return 0;
}
