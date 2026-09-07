#include <iostream>
#include <vector>
#include "circulo.hpp"
#include "rectangulo.hpp"

int main() {
    std::vector<Figura*> figs;
    figs.push_back(new Circulo(1.0));
    figs.push_back(new Rectangulo(3.0, 4.0));

    double total = 0.0;
    for (const Figura* f : figs) {
        std::cout << f->nombre() << ": " << f->area() << '\n';
        total += f->area();
    }
    std::cout << "total: " << total << '\n';

    for (Figura* f : figs) delete f;
    return 0;
}
