#include <stdio.h>

int main() {
    int arreglo[5] = {1, 2, 3, 4, 5};
    int *puntero;

    puntero = &arreglo[0];

    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *puntero);
        *puntero += 19;
        puntero++;
    }

    printf("Después de modificar el arreglo:\n");

    puntero = &arreglo[0];
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *puntero);
        puntero++;
    }

    return 0;
}

