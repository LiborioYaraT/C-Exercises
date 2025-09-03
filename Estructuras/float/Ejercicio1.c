#include <stdio.h>

#define PI 3.14159265f

int main() {
    float radio, area;

    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);

    if (radio < 0) {
        printf("El radio no puede ser negativo.\n");
        return 1;
    }

    area = PI * radio * radio;

    printf("El área del círculo con radio %.2f es %.4f\n", radio, area);

    return 0;
}
