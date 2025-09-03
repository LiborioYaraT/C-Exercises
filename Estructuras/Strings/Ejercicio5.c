#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[200];
    int palabras = 0;
    
    printf("Ingrese una frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    for (int i = 0; i < strlen(frase); i++) {
        if (isalpha(frase[i]) && (i == 0 || !isalpha(frase[i-1]))) {
            palabras++;
        }
    }
    
    printf("La frase tiene %d palabras\n", palabras);
    
    return 0;
}