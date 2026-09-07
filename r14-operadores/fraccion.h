#pragma once
#include <iostream>

class Fraccion {
public:
    Fraccion(int n = 0, int d = 1);

    Fraccion operator+(const Fraccion& o) const;
    Fraccion operator*(const Fraccion& o) const;
    bool operator==(const Fraccion& o) const;
    bool operator<(const Fraccion& o) const;

    friend std::ostream& operator<<(std::ostream& os, const Fraccion& f);

private:
    int num_, den_;
    void reducir();
};