#include <iostream>

double sumanumeros (double num1, double num2){
    double suma = num1 + num2;
    return suma;
}

int main() {
    double numero1, numero2;

    std::cout << "Ingresa el primer número: ";
    std::cin >> numero1;

    std::cout << "Ingresa el segundo número: ";
    std::cin >> numero2;

    double resultado = sumanumeros(numero1, numero2);

    std::cout << "La suma de " << numero1 << " y " << numero2 << " es igual a " << resultado << std::endl;

    return 0;
}