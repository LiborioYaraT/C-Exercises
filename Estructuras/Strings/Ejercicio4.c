#include <stdio.h>
#include <string.h>

int main() {
    char cadena1[100], cadena2[100];
    
    printf("Ingrese la primera cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    cadena1[strcspn(cadena1, "\n")] = '\0';
    
    printf("Ingrese la segunda cadena: ");
    fgets(cadena2, sizeof(cadena2), stdin);
    cadena2[strcspn(cadena2, "\n")] = '\0';
    
    strcat(cadena1, cadena2);
    
    printf("Cadenas concatenadas: %s\n", cadena1);
    
    return 0;
}