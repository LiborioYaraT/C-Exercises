#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cadena[100];
    int contador = 0;
    
    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    
    for (int i = 0; i < strlen(cadena); i++) {
        char c = tolower(cadena[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }
    
    printf("La cadena tiene %d vocales\n", contador);
    
    return 0;
}