#include <iostream>

int suma(int num1, int num2) {
    return num1 + num2;
}

float suma(float num1, float num2) {
    return num1 + num2;
}

int main() {
    int entero1 = 5, entero2 = 10;
    float flotante1 = 3.5, flotante2 = 2.5;

    int resultadoenteros = suma(entero1, entero2);
    std::cout << "Suma de enteros: " << resultadoenteros << std::endl;

    float resultadoflotantes = suma(flotante1, flotante2);
    std::cout << "Suma de números de punto flotante: " << resultadoflotantes << std::endl;

    return 0;
}

