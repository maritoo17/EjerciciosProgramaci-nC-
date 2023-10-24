#include <iostream>

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int main() {
    int (*funcionPuntero)(int, int);

    funcionPuntero = suma;

    int resultado = funcionPuntero(13, 33);
    std::cout << "Resultado de suma: " << resultado << std::endl;

    funcionPuntero = resta;

    resultado = funcionPuntero(47, 98);
    std::cout << "Resultado de resta: " << resultado << std::endl;

    return 0;
}