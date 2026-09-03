#include <iostream>
#include <vector>

std::pair<double, int> obtenerNotas(){
    int num;
    double suma = 0;
    std::cout << "Ingrese el numero de materias: ";
    std::cin >> num;
    std::vector<double> notas(num);

    for (int i = 0; i < static_cast<int>(notas.size()); i++){
    std::cout << "Nota " << i+1 << ": ";
    std:: cin >> notas[i];
    suma += notas[i];
    }
    return {suma, num};
}

double prom(double &suma, int &numeroMat){
    std ::cout << "El promedio es: ";


    return suma / numeroMat;
}

bool aporbado(double prom){
    if (prom >= 70) std::cout << "Aporbado\n";
    else            std::cout << "Reporbado \n";

    return 0;
}

