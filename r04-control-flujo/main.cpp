#include <iostream>

int main(){
    const int N = 5;
    int d[N] = {10, 20, 30, 40, 50};

    int suma = 0;
    for (int i = 0; i < N; i++) suma += d[i];
    std ::cout << "La suma total es : " << suma << "\n";

    int cuantos = 0;
    for (int i = 0; i < N; i++){
        if (d[i] > 25) cuantos++;
    }
    std ::cout << "Hay " << cuantos << " numeros mayores que 25" << "\n";
    
    int k = 0;
    while (k < N ){
    std::cout << d[k] << ' ';
    k++;
}
}