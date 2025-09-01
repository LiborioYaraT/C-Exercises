#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Ingrese un carácter: ");
    scanf("%c", &c);

    // Convertir a minúscula para simplificar la comparación
    char ch = tolower(c);

    if ((ch >= 'a' && ch <= 'z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("El carácter '%c' es una vocal.\n", c);
        } else {
            printf("El carácter '%c' es una consonante.\n", c);
        }
    } else {
        printf("El carácter '%c' no es una letra del alfabeto.\n", c);
    }

    return 0;
}