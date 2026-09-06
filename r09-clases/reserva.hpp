#include <iostream>
#pragma once
#include <string>

class Reserva {
   

public:
    void setSala(std::string s){// invariante 1: no vacia

        if (s == ""){
            std::cout<<"No puede quedar vacio." << "\n";
            return;
        }
        sala = s;
    }
    std::string getSala() const{
        return sala;
    }
    void setPersonas(int p){  // invariante 2: entre 1 y 20
        
        if (p < 1 || p > 20){
            std::cout<<"Edad invalida." << "\n";
            return;
        }
        personas = p;
    }

    int getPersonas() const{
        return personas;
    }
    void setHorario(int inicio, int fin){ // inv. 3: 0 <= inicio < fin <= 23
        if (inicio < 0 || inicio >= fin || fin > 23){
            std::cout<<"Horario invalido." << "\n";
            return;
        }
        horaInicio = inicio;
        horaFin = fin;
    }

    int getHoraInicio() const{
        return horaInicio;
    }
    int getHoraFin() const{
        return horaFin;
    }


private:
    std::string sala = "Sin sala";
    int personas = 1;
    int horaInicio = 0;
    int horaFin = 1;

};
