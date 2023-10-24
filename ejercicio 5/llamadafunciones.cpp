#include <iostream>

int suma(int num1, int num2){
    return num1 + num2;
}

int resta(int num1, int num2){
    return num1 - num2;
}

int multiplicacion(int num1, int num2){
    return num1 * num2;
}

double division(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        std::cout << "Error: No se puede dividir por cero." << std::endl;
        return 0;
    }
}

int main() {
    int numero1, numero2;

    std::cout << " Ingresa el primer numero: ";
    std::cin >> numero1;

    std::cout << " Ingresa el segundo numero: ";
    std::cin >> numero2;

    int resultadosuma = numero1 + numero2;
    int resultadoresta = numero1 - numero2;
    int resultadomultiplicacion = numero1 * numero2;
    double resultadodivision = numero1 / numero2;

    std::cout << " El resultado de la suma es: " << resultadosuma << std::endl;
    std::cout << " El resultado de la resta es: " << resultadoresta << std::endl;
    std::cout << " El resultado de la multiplicacion es: " << resultadomultiplicacion << std::endl;
    std::cout << " El resultado de la division es: " << resultadodivision << std::endl;

    return 0;
}