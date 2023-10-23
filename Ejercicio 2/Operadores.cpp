#include <iostream>

int main(){
    int a = 7;
    int b = 3;
    bool isTrue = true;
    bool isFalse = false;

    int suma = a + b;
    int division = a / b;
    int modulo = a % b;

    std::cout << "Suma: " << suma << std::endl;
    std::cout << "División: " << division << std::endl;
    std::cout << "Módulo: " << modulo << std::endl;

    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;

    std::cout << "isTrue && isFalse: " << (isTrue && isFalse) << std::endl;
    std::cout << "isTrue || isFalse: " << (isTrue || isFalse) << std::endl;
    std::cout << "!isTrue: " << !isTrue << std::endl;

    return 0;

}