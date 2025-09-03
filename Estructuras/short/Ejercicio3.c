#include <stdio.h>

int main() {
    short numero;
    
    printf("Ingrese un número: ");
    scanf("%hd", &numero);
    
    if (numero % 5 == 0) {
        printf("%hd es múltiplo de 5\n", numero);
    } else {
        printf("%hd no es múltiplo de 5\n", numero);
    }
    
    return 0;
}