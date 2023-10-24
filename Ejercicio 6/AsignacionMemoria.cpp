#include <iostream>

int main() {
    int n;
    std::cout <<"Ingrese el tamaño del arreglo: ";
    std::cin >> n;

    int* arreglo = new int[n];

    for (int i = 0; i < n; i++) {
        arreglo[i] = i * 10;
    }

    std::cout << "Valores del arreglo: ";
    for (int i = 0; i < n; i++) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;

    delete[] arreglo;

    return 0;
}