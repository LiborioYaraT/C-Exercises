#include <stdio.h>

int main() {
    short numero;
    
    printf("Ingrese un número: ");
    scanf("%hd", &numero);
    
    printf("El número %hd en binario es: ", numero);
    
    for (int i = 15; i >= 0; i--) {
        printf("%d", (numero >> i) & 1);
    }
    
    printf("\n");
    
    return 0;
}