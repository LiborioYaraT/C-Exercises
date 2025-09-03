#include <stdio.h>
#include <string.h>

struct Persona {
    char nombre[50];
    int edad;
    char direccion[100];
};

int main() {
    struct Persona persona;
    
    printf("Ingrese el nombre: ");
    fgets(persona.nombre, sizeof(persona.nombre), stdin);
    persona.nombre[strcspn(persona.nombre, "\n")] = '\0';
    
    printf("Ingrese la edad: ");
    scanf("%d", &persona.edad);
    while (getchar() != '\n'); // Limpiar buffer
    
    printf("Ingrese la dirección: ");
    fgets(persona.direccion, sizeof(persona.direccion), stdin);
    persona.direccion[strcspn(persona.direccion, "\n")] = '\0';
    
    printf("\nDatos de la persona:\n");
    printf("Nombre: %s\n", persona.nombre);
    printf("Edad: %d\n", persona.edad);
    printf("Dirección: %s\n", persona.direccion);
    
    return 0;
}