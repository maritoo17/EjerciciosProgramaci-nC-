#include <iostream>


extern void mifuncion();

int main() {
    std::cout << "Llamando a la funcion desde funcionesexternas2 " << std::endl;
    mifuncion();
    return 0;
}

