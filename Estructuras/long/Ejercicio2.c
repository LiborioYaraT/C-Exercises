#include <stdio.h>

int main() {
    long num1, num2, suma;
    
    printf("Ingrese el primer número: ");
    scanf("%ld", &num1);
    
    printf("Ingrese el segundo número: ");
    scanf("%ld", &num2);
    
    suma = num1 + num2;
    
    printf("La suma de %ld + %ld es: %ld\n", num1, num2, suma);
    
    return 0;
}