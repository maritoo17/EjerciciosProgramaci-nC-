#include <iostream>
#include <cstdarg>

int suma_variable(int num_args, ...) {
    int suma = 0;
    va_list args;
    va_start(args, num_args);

    for (int i = 0; i < num_args; i++) {
        suma += va_arg(args, int);
    }

    va_end(args);
    return suma;
}

int main() {
    int resultado1 = suma_variable(3, 5, 10, 15);
    int resultado2 = suma_variable(4, 2, 4, 6, 8);

    std::cout << "Resultado 1: " << resultado1 << std::endl;
    std::cout << "Resultado 2: " << resultado2 << std::endl;

    return 0;
}
