#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    printf("Ingrese un carácter: ");
    scanf(" %c", &c);

    if (isdigit(c)) {
        printf("El carácter '%c' es un dígito numérico.\n", c);
    } else {
        printf("El carácter '%c' no es un dígito numérico.\n", c);
    }

    return 0;
}
