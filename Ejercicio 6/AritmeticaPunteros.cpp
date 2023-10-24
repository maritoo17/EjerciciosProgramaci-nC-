#include <iostream>

int main() {
    int arreglo[] = {10, 20, 30, 40, 50};
    int *puntero = arreglo;

    std::cout << "Valores originales del arreglo:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << *puntero << " ";
        puntero++;
    }
    std::cout << std::endl;

    puntero = arreglo;

    std::cout << "Valores usando aritmética de punteros:" << std::endl;
    std::cout << "Tercer elemento: " << puntero [2] << std::endl;
    std::cout << "Quinto elemento: " << *(puntero + 4) << std::endl;

    return 0;
}
