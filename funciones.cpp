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
// Funcion para verificar si un conjunto de tres numeros cumple con las condiciones de un triangulo
// Recibe tres numeros enteros positivos, que representan las longitudes de los lados de un triangulo.
// Devuelve un valor "true" si se cumplen las condiciones de un triangulo o un valor "false" en caso contrario
