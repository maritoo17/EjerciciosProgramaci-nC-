#include <iostream>

#define PI 3.14159265359
#define TAMANO_ARREGLO 10
#define NOMBRE "John Doe"

int main() {
    double radio = 3.7;
    double area =PI * radio * radio;

    int arreglo[TAMANO_ARREGLO];

    std::cout << "Valor de PI: " << PI << std::endl;
    std::cout << "Nombre: " << NOMBRE << std::endl;
    std::cout << "Area del circulo con radio " << radio << ": " << area << std::endl;
    std::cout << "Tamaño del arreglo: " << TAMANO_ARREGLO << std::endl;

    return 0;
}