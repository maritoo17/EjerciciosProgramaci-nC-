#include <iostream>

void ejemploFuncion() {
    int variableLocal = 33;
    std::cout << "Dentro de la función: variableLocal = " << variableLocal << std::endl;
}

int main() {
    int variableMain = 46;
    std::cout << "En la función main: variableMain = " << variableMain << std::endl;

    ejemploFuncion();

    return 0;
}
