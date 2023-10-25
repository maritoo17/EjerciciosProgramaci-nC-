#include <iostream>
#include <string>

int main() {
    std::string nombre = "Mario";
    std::string& referencia = nombre;

    std::cout << " Nombre original: " << nombre << std::endl;
    std::cout << " Referencia: " << referencia << std::endl;

    referencia = "Sergio";

    std::cout << " Nombre modificado a traves de la referencia: " << nombre << std::endl;
    std::cout << " Referencia modificada: " << referencia << std::endl;

    return 0;
}