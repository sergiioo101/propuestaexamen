#include "funciones.h"
#include "funciones.cpp"
#include <cmath>

int main() {
    int limite = 20; // Puedes ajustar este valor para buscar triples pitagóricos en un rango diferente

    for (int a = 1; a <= limite; a++) {
        for (int b = a; b <= limite; b++) {
            int c = std::sqrt(a * a + b * b);

            if (esTriplePitagorico(a, b, c) && esTrianguloValido(a, b, c)) {
                std::cout << a << " - " << b << " - " << c << std::endl;
            }
        }
    }

    return 0;
}
