#include <stdio.h>

int main() {
    float num1, num2;
    
    printf("=== COMPARADOR DE NÚMEROS DECIMALES ===\n");
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);
    
    printf("\nRESULTADO:\n");
    
    if (num1 > num2) {
        printf("%.2f es MAYOR que %.2f\n", num1, num2);
    } 
    else if (num2 > num1) {
        printf("%.2f es MAYOR que %.2f\n", num2, num1);
    } 
    else {
        printf("Los números son IGUALES\n");
    }
    
    return 0;
}