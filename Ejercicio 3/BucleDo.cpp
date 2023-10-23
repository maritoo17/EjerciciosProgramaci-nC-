#include <iostream>

int main(){
    int numero;

    std::cout << "Por favor, ingrese un numero: ";
    std::cin >> numero;

    int contador = 1;

    std::cout << "Tabla de multiplicar del " << numero << " : " << std::endl;
    do {
        int resultado = numero * contador;
        std::cout << numero << " x " << contador << " = " << resultado << std::endl;
        contador++;
    } while (contador <= 10);

    return 0;
}