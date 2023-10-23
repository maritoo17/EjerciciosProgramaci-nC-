#include <iostream>

int main() {
    int numero;

    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero;

    int contador = 1;

    std::cout << "Tabla de multiplicar del " << numero << ":" << std::endl;
    while (contador <= 10) {
        int resultado = numero * contador;
        std::cout << numero << " x " << contador << " = " << resultado << std::endl;
        contador++;

    }

    return 0;

}