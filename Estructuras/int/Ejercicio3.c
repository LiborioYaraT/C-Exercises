#include <stdio.h>

int main() {
    int numero;
    long long factorial = 1;
    
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("Error: El número debe ser positivo.\n");
        return 1;
    }
    
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }
    
    printf("El factorial de %d es: %lld\n", numero, factorial);
    
    return 0;
}