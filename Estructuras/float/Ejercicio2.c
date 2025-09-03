#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &celsius);
    
    // Fórmula de conversión: F = (C × 9/5) + 32
    fahrenheit = (celsius * 9/5) + 32;
    
    printf("%.2f°C equivalen a %.2f°F\n", celsius, fahrenheit);
    
    return 0;
}