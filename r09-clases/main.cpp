#include <iostream>
#include "reserva.hpp"

int main() {
    Reserva r;


    std::cout << "sala=" << r.getSala()
               << " personas=" << r.getPersonas()
               << " horario=" << r.getHoraInicio() << "-" << r.getHoraFin() << "\n\n";


    r.setSala("");            // debe rechazar (vacia)
    std::cout << "sala tras rechazo: " << r.getSala() << "\n";
    r.setSala("Lab 3");       // debe aceptar
    std::cout << "sala tras aceptar: " << r.getSala() << "\n\n";

 
    r.setPersonas(0);         // debe rechazar (menor a 1)
    std::cout << "personas tras rechazo: " << r.getPersonas() << "\n";
    r.setPersonas(25);        // debe rechazar (mayor a 20)
    std::cout << "personas tras rechazo: " << r.getPersonas() << "\n";
    r.setPersonas(8);         // debe aceptar
    std::cout << "personas tras aceptar: " << r.getPersonas() << "\n\n";


    r.setHorario(-1, 10);     // debe rechazar (inicio < 0)
    std::cout << "horario tras rechazo: " << r.getHoraInicio() << "-" << r.getHoraFin() << "\n";
    r.setHorario(10, 24);     // debe rechazar (fin > 23)
    std::cout << "horario tras rechazo: " << r.getHoraInicio() << "-" << r.getHoraFin() << "\n";
    r.setHorario(15, 15);     // debe rechazar (inicio == fin)
    std::cout << "horario tras rechazo: " << r.getHoraInicio() << "-" << r.getHoraFin() << "\n";
    r.setHorario(9, 11);      // debe aceptar
    std::cout << "horario tras aceptar: " << r.getHoraInicio() << "-" << r.getHoraFin() << "\n";

    return 0;
}