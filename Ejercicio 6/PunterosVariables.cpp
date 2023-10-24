#include <stdio.h>

int main() {
    int numero = 33;
    double decimal = 4.16;

    int *punteroEntero;
    double *punteroDouble;

    punteroEntero = &numero;
    punteroDouble = &decimal;

    *punteroEntero = 26;
    *punteroDouble = 2.3746;

    printf("Valor de numero : %d\n", numero);
    printf("Valor de decimal: %lf\n", decimal);

    printf("Valor a través del punteroEntero: %d\n", *punteroEntero);
    printf("Valor a través del punteroDouble: %lf\n", punteroDouble);

    return 0;
}

