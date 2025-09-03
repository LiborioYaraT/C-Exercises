#include <stdio.h>

int main() {
    int n;
    
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    
    short arreglo[n];
    int contador = 0;
    
    printf("Ingrese %d números:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%hd", &arreglo[i]);
        
        if (arreglo[i] % 2 == 0) {
            contador++;
        }
    }
    
    printf("El arreglo tiene %d números pares\n", contador);
    
    return 0;
}