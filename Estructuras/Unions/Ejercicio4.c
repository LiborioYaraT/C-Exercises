#include <stdio.h>

// Definimos una unión con distintos tipos de datos
union Datos {
    int entero;
    float flotante;
    char caracter;
    double doble;
};

int main() {
    union Datos d;

    printf("Tamaño de la unión: %zu bytes\n", sizeof(d));
    printf("Tamaño de int: %zu bytes\n", sizeof(d.entero));
    printf("Tamaño de float: %zu bytes\n", sizeof(d.flotante));
    printf("Tamaño de char: %zu bytes\n", sizeof(d.caracter));
    printf("Tamaño de double: %zu bytes\n", sizeof(d.doble));

    return 0;
}
