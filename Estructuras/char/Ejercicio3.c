#include <stdio.h>

int main() {
    char letra;

    printf("Ingrese una letra minúscula: ");
    scanf(" %c", &letra);

    if (letra >= 'a' && letra <= 'z') {
        // Convertir a mayúscula restando la diferencia en ASCII
        char mayuscula = letra - ('a' - 'A');
        printf("La letra mayúscula es: %c\n", mayuscula);
    } else {
        printf("El carácter ingresado no es una letra minúscula.\n");
    }

    return 0;
}
