#ifndef PUNTO_H
#define PUNTO_H

class Punto{
    double x,y;
    public:
    Punto();
    Punto (double a, double b);
    double distanciaAlOrigen() const;
    void imprimir() const;

};

#endif