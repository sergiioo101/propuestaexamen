#include <stdio.h>
#include <math.h>
#include "funciones.h"
int main() {
    int a, b, c;
    int limite = 20; // Puedes ajustar este valor para buscar triples pitagóricos en un rango diferente

    for (a = 1; a <= limite; a++) {
        for (b = a; b <= limite; b++) {
            c = sqrt(a * a + b * b);

            if (c * c == a * a + b * b && a + b > c) {
                printf("%d - %d - %d\n", a, b, c);
            }
        }
    }

    return 0;
}
