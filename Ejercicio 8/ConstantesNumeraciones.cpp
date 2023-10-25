#include <iostream>

enum DiasSemana { Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo };
int main() {
    DiasSemana hoy = Sabado;

    std::cout << "Hoy es ";
    switch (hoy) {
        case Lunes:
            std::cout << "Lunes";
            break;
        case Martes:
            std::cout << "Martes";
            break;
        case Miercoles:
            std::cout << "Miercoles";
            break;
        case Jueves:
            std::cout << "Jueves";
            break;
        case Viernes:
            std::cout << "Viernes";
            break;
        case Sabado:
            std::cout << "Sabado";
            break;
        case Domingo:
            std::cout << "Domingo";
            break;
    }

    return 0;
}
