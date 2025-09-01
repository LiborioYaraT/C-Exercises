#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100];
    char letra;
    int contador = 0;

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    printf("Ingrese la letra a buscar: ");
    scanf(" %c", &letra);

    for (int i = 0; i < strlen(palabra); i++) {
        if (palabra[i] == letra) {
            contador++;
        }
    }

    printf("La letra '%c' aparece %d veces en la palabra \"%s\".\n", letra, contador, palabra);

    return 0;
}
