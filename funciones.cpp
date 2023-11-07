#include "funciones.h"
bool esTriplePitagorico(int a, int b, int c) {
    return a * a + b * b == c * c;
}

bool esTrianguloValido(int a, int b, int c) {
    return a + b > c && a + c > b && b + c > a;
}
