#include <iostream>
 int variableglobal = 10;

void funcionlocalglobal(){
    int variablelocal = 5;

    std::cout << "Variable local:" << variablelocal << std::endl;
    std::cout << "Variable global:" << variableglobal << std::endl;

}

int main() {

    std::cout << "Variable global:" << variableglobal << std::endl;

    funcionlocalglobal();

    return 0;
}