#include "fraccion.h"
#include <numeric> 
#include <cstdlib> 

Fraccion::Fraccion(int n, int d) : num_(n), den_(d) {
    reducir();
}

void Fraccion::reducir() {
    if (den_ < 0) {           // el signo siempre queda en el numerador
        num_ = -num_;
        den_ = -den_;
    }
    int divisor = std::gcd(std::abs(num_), den_);
    if (divisor != 0) {
        num_ /= divisor;
        den_ /= divisor;
    }
}

Fraccion Fraccion::operator+(const Fraccion& o) const {
    return Fraccion(num_ * o.den_ + o.num_ * den_,
                     den_ * o.den_);
}

Fraccion Fraccion::operator*(const Fraccion& o) const {
    return Fraccion(num_ * o.num_, den_ * o.den_);
}

bool Fraccion::operator==(const Fraccion& o) const {
    return num_ * o.den_ == o.num_ * den_;
}

bool Fraccion::operator<(const Fraccion& o) const {
    return num_ * o.den_ < o.num_ * den_;
}

std::ostream& operator<<(std::ostream& os, const Fraccion& f) {
    return os << f.num_ << '/' << f.den_;
}