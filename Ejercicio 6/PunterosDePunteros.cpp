#include <iostream>

int main() {
    int numero = 42;
    int* puntero1 = &numero;
    int** puntero2 = &puntero1;

    std::cout <<"Valor origina de numero: " << *puntero1 << std::endl;

    **puntero2 = 99;

    std::cout << "Valor modificado de numero: " << *puntero1 << std::endl;

    std::cout << "Valor modificado de numero (usando puntero2): " << **puntero2 << std::endl;

    return 0;
}