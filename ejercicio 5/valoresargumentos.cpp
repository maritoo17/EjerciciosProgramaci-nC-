#include <iostream>

double calcularAreaRectangulo(double longitud = 1.0, double ancho = 1.0) {
    return longitud * ancho;
}

int main() {
    double area1 = calcularAreaRectangulo();
    double area2 = calcularAreaRectangulo(5.0, 3.0);

    std::cout << "Area del rectangulo con valores predeterminados: " << area1 << std::endl;
    std::cout << "Area del rectangulo con valores personalizados: " << area2 << std::endl;

    return 0;
}

