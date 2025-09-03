#include <stdio.h>

int main() {
    short num1, num2, suma;
    
    printf("Ingrese el primer número: ");
    scanf("%hd", &num1);
    
    printf("Ingrese el segundo número: ");
    scanf("%hd", &num2);
    
    suma = num1 + num2;
    
    printf("La suma de %hd + %hd es: %hd\n", num1, num2, suma);
    
    return 0;
}