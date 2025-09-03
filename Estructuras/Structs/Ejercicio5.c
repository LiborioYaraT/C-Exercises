#include <stdio.h>
#include <string.h>

struct Persona {
    char nombre[50];
    int edad;
    float altura;
};

int main() {
    struct Persona persona1, persona2;
    
    printf("Ingrese datos de la primera persona:\n");
    printf("Nombre: ");
    scanf("%s", persona1.nombre);
    printf("Edad: ");
    scanf("%d", &persona1.edad);
    printf("Altura: ");
    scanf("%f", &persona1.altura);
    
    printf("\nIngrese datos de la segunda persona:\n");
    printf("Nombre: ");
    scanf("%s", persona2.nombre);
    printf("Edad: ");
    scanf("%d", &persona2.edad);
    printf("Altura: ");
    scanf("%f", &persona2.altura);
    
    if (strcmp(persona1.nombre, persona2.nombre) == 0 &&
        persona1.edad == persona2.edad &&
        persona1.altura == persona2.altura) {
        printf("\nLas personas son iguales\n");
    } else {
        printf("\nLas personas son diferentes\n");
    }
    
    return 0;
}