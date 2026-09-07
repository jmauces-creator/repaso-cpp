#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>


void conVector(const std::vector<std::string>& palabras) {
    std::vector<std::string> claves;
    std::vector<int> veces;

    for (const std::string& w : palabras) {
        bool esta = false;
        for (std::size_t i = 0; i < claves.size(); ++i) {
            if (claves[i] == w) {
                veces[i]++;
                esta = true;
                break;
            }
        }
        if (!esta) {
            claves.push_back(w);
            veces.push_back(1);
        }
    }

    std::cout << "--- con vector (O(n*k)) ---\n";
    for (std::size_t i = 0; i < claves.size(); ++i)
        std::cout << claves[i] << "=" << veces[i] << ' ';
    std::cout << "\n\n";
}

void conMap(const std::vector<std::string>& palabras) {
    std::map<std::string, int> conteo;
    for (const std::string& w : palabras) conteo[w]++;

    std::cout << "--- con map (O(n log k), ordenado por clave) ---\n";
    for (const auto& par : conteo)
        std::cout << par.first << "=" << par.second << ' ';
    std::cout << "\n\n";
}

void conSet(const std::vector<std::string>& palabras) {
    std::set<std::string> distintas(palabras.begin(), palabras.end());

    std::cout << "--- con set ---\n";
    std::cout << "palabras distintas: " << distintas.size() << '\n';
    std::cout << "(el set responde \"cuantas distintas\", no \"cuantas veces cada una\")\n\n";
}

int main() {
    std::vector<std::string> palabras{"sol", "mar", "sol", "luz", "sol", "mar"};

    conVector(palabras);
    conMap(palabras);
    conSet(palabras);

    return 0;
}
