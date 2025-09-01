#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

int main() { // Función principal
    char c;
    printf("Ingrese un carácter: ");
    scanf("%c", &c);
// Declara una variable char 'letra' y le asigna el carácter 'A'
    printf("El carácter es: %c y su código ASCII es: %d\n", c, c); // Imprime el carácter y su código ASCII
    return 0; // Indica que el programa terminó correctamente
}