#include <stdio.h>

int main() {
    int n;
    
    printf("Ingrese el número de personas: ");
    scanf("%d", &n);
    
    short edades[n];
    
    printf("Ingrese las edades de %d personas:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Edad de la persona %d: ", i + 1);
        scanf("%hd", &edades[i]);
    }
    
    printf("\nEdades almacenadas:\n");
    for (int i = 0; i < n; i++) {
        printf("Persona %d: %hd años\n", i + 1, edades[i]);
    }
    
    return 0;
}