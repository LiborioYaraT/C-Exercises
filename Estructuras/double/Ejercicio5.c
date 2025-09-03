#include <stdio.h>
#include <math.h>

int main() {
    double base, exponente, resultado;

    printf("Ingrese la base: ");
    scanf("%lf", &base);

    printf("Ingrese el exponente: ");
    scanf("%lf", &exponente);

    resultado = pow(base, exponente);

    printf("%.6lf elevado a %.6lf es %.6lf\n", base, exponente, resultado);

    return 0;
}
