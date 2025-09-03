#include <stdio.h>

int main() {
    int n = 1000;
    double pi = 0.0;

    for (int i = 0; i < n; i++) {
        // Alterna entre sumar y restar términos
        if (i % 2 == 0) {
            pi += 1.0 / (2 * i + 1);
        } else {
            pi -= 1.0 / (2 * i + 1);
        }
    }

    pi *= 4;  // Multiplicar por 4 para obtener pi

    printf("Aproximación de pi usando %d términos: %.15f\n", n, pi);

    return 0;
}