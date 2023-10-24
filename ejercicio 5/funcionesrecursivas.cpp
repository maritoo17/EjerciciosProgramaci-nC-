#include <iostream>

unsigned long long factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int numero;

    std::cout << "Ingresa un numero para calcular su factorial: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "El factorial no está definido para numeros negativos." << std::endl;
    } else {
        unsigned long long resultado = factorial(numero);
        std::cout << "El factorial de " << numero << " es " << resultado << std::endl;
    }

    return 0;
}

