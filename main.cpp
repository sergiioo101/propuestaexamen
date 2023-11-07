#include "funciones.h"
#include "funciones.cpp"
#include <cmath>

int main() {
    int limite = 20; // Limite para "a" y "b", que puedes ajustar para cambiar el rango de busqueda

    // Bucle para "a", primer lado del triangulo
    for (int a = 1; a <= limite; a++) {
        // Bucle para "b", segundo lado del triangulo
        for (int b = a; b <= limite; b++) {
            // Calcula el tercer lado "c", usando la fórmula de Pitagoras.
            int c = std::sqrt(a * a + b * b);

            // Verifica si el conjunto de lados (a, b, c) forma un triple pitagorico valido
            // Verifica si cumple con las condiciones de un triangulo rectangulo.
            if (esTriplePitagorico(a, b, c) && esTrianguloValido(a, b, c)) {
                // Si se cumplen las condiciones, imprime el triple pitagorico encontrado.
                std::cout << "Triple pitagorico encontrado: " << a << " - " << b << " - " << c << std::endl;
            }
        }
    }

    return 0;
}
