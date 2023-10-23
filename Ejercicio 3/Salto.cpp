#include <iostream>

int main() {
    int suma = 0;

    for (int i = 1; ; i++) {
        suma += i;

        if (suma > 89) {
            std::cout << "La suma no ha superado 100." << std::endl;
            break;
        }
    }

    std::cout << "La suma total es: " << suma << std::endl;

    return 0;
}
