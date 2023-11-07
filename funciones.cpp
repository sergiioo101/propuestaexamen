#include "funciones.h"
bool esTriplePitagorico(int a, int b, int c) {
    return a * a + b * b == c * c;
}
// Funcion para verificar si un conjunto de tres numeros representa un triple pitagorico
// Esta recibe tres numeros positivos enteros a, b y c
// Devuelve un valor "true" si los 3 valores forman un triple pitagorico

bool esTrianguloValido(int a, int b, int c) {
    return a + b > c && a + c > b && b + c > a;
}
