#include <stdio.h>

int main() {
    long numero;
    long factorial = 1;
    
    printf("Ingrese un número entero positivo: ");
    scanf("%ld", &numero);
    
    if (numero < 0) {
        printf("Error: El número debe ser positivo.\n");
        return 1;
    }
    
    for (long i = 1; i <= numero; i++) {
        factorial *= i;
    }
    
    printf("El factorial de %ld es: %ld\n", numero, factorial);
    
    return 0;
}