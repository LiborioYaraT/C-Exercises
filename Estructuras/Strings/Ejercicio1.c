#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    
    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    
    // Eliminar el salto de línea al final
    cadena[strcspn(cadena, "\n")] = '\0';
    
    int longitud = strlen(cadena);
    
    printf("Cadena al revés: ");
    for (int i = longitud - 1; i >= 0; i--) {
        printf("%c", cadena[i]);
    }
    printf("\n");
    
    return 0;
}