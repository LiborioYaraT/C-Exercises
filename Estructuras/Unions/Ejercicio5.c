#include <stdio.h>

// Definimos la unión con varios tipos
union Conversor {
    int entero;
    float flotante;
    double doble;
    unsigned char bytes[8]; // Para ver representación en bytes
};

int main() {
    union Conversor c;

    // Ejemplo 1: Entero a flotante
    c.entero = 1065353216;  // Representa 1.0 en float IEEE 754
    printf("Entero: %d -> interpretado como float: %f\n", c.entero, c.flotante);

    // Ejemplo 2: Flotante a entero
    c.flotante = 3.14f;
    printf("Float: %f -> interpretado como entero: %d\n", c.flotante, c.entero);

    // Ejemplo 3: Double a bytes
    c.doble = 123.456;
    printf("Double: %lf -> en bytes: ", c.doble);
    for (int i = 0; i < sizeof(c.doble); i++) {
        printf("%02X ", c.bytes[i]);
    }
    printf("\n");

    // Ejemplo 4: Sobrescribir como entero y ver como double
    c.entero = 42;
    printf("Entero: %d -> interpretado como double: %lf\n", c.entero, c.doble);

    return 0;
}
