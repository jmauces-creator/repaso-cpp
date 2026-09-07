#include <iostream>
#include <vector>

void medirCrecimiento(bool conReserve) {
    std::vector<int> v;
    if (conReserve) v.reserve(1000);

    std::size_t cap = v.capacity();
    int reasignaciones = 0;

    std::cout << (conReserve ? "--- con reserve(1000) ---\n"
                              : "--- sin reserve ---\n");
    std::cout << "size 0 -> capacity " << cap << '\n';

    for (int i = 0; i < 1000; ++i) {
        v.push_back(i);
        if (v.capacity() != cap) {
            cap = v.capacity();
            reasignaciones++;
            std::cout << "size " << v.size() << " -> capacity " << cap << '\n';
        }
    }
    std::cout << "total de reasignaciones: " << reasignaciones << "\n\n";
}

int main() {
    medirCrecimiento(false);
    medirCrecimiento(true);
    return 0;
}
