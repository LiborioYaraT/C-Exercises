#include <stdio.h>

int main() {
    double numeros[5];
    double suma = 0.0;
    double promedio;

    for (int i = 0; i < 5; i++) {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%lf", &numeros[i]);
        suma += numeros[i];
    }

    promedio = suma / 5;

    printf("El promedio es: %.2lf\n", promedio);

    return 0;
}
