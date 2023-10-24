#include <iostream>

inline double cuadrado(double x) {
    return x * x;
}

int main() {
    double numero = 5.0;

    double resultado = cuadrado(numero);

    std::cout << "El cuadrado de " << numero << " es " << resultado << std::endl;

    return 0;
}
