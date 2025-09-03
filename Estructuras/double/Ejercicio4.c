#include <stdio.h>

int main() {
    double num;

    printf("Ingrese un número: ");
    scanf("%lf", &num);

    if (num > 0) {
        printf("El número %.6lf es positivo.\n", num);
    } else if (num < 0) {
        printf("El número %.6lf es negativo.\n", num);
    } else {
        printf("El número es cero.\n");
    }

    return 0;
}
