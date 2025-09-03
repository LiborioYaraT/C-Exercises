#include <stdio.h>
#include <math.h>

int main() {
    long numero;
    int es_primo = 1;
    
    printf("Ingrese un número entero positivo: ");
    scanf("%ld", &numero);
    
    if (numero <= 1) {
        es_primo = 0;
    } else {
        for (long i = 2; i <= sqrt(numero); i++) {
            if (numero % i == 0) {
                es_primo = 0;
                break;
            }
        }
    }
    
    if (es_primo) {
        printf("%ld es un número primo\n", numero);
    } else {
        printf("%ld no es un número primo\n", numero);
    }
    
    return 0;
}