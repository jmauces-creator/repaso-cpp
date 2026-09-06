#include <iostream>

class Punto {
    int x, y;
    public:
    Punto(int a, int b) : x(a), y(b) {}
        int getX() const { return x;}
    
}; //- si se pone el punto y coma el error desaparece

int main(){
    Punto origen(0,0);
    std::cout << "El origen es: " << origen.getX() << "\n";
}