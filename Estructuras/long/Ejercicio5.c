#include <stdio.h>

int main() {
    long num1, num2, producto;
    
    printf("Ingrese el primer número: ");
    scanf("%ld", &num1);
    
    printf("Ingrese el segundo número: ");
    scanf("%ld", &num2);
    
    producto = num1 * num2;
    
    printf("El producto de %ld * %ld es: %ld\n", num1, num2, producto);
    
    return 0;
}