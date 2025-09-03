#include <stdio.h>
#include <math.h>

int main() {
    double numero;
    
    printf("Ingrese un número: ");
    scanf("%lf", &numero);
    
    if (numero < 0) {
        printf("Error: No se puede calcular la raíz cuadrada de un número negativo.\n");
        return 1;
    }
    
    double raiz = sqrt(numero);
    printf("La raíz cuadrada de %.2f es: %.2f\n", numero, raiz);
    
    return 0;
}