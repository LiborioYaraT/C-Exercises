#include <stdio.h>

union Valor {
    int entero;
    char caracter;
};

int main() {
    union Valor valor;
    
    valor.entero = 65;
    printf("Como entero: %d\n", valor.entero);
    printf("Como caracter: %c\n", valor.caracter);
    
    valor.caracter = 'B';
    printf("\nComo entero: %d\n", valor.entero);
    printf("Como caracter: %c\n", valor.caracter);
    
    return 0;
}