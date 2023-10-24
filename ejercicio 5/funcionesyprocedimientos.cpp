#include <iostream>

int suma (int num1, int num2) {
    int resultado = num1 + num2;
    return resultado;
}

void imprimirmensaje () {
    std::cout << "Mensaje de un procedicimiento" << std::endl;
}

int main (){
    int numero1, numero2;

    std::cout << " Ingresa el primer numero ";
    std::cin >> numero1;

    std::cout << " Ingrese el segundo numero ";
    std::cin >> numero2;

    int resultadosuma = suma(numero1, numero2);

    imprimirmensaje();

    std::cout << " La suma de " << numero1 << " y " << numero2 << " es igual a " << resultadosuma << std::endl;
    return 0;
}