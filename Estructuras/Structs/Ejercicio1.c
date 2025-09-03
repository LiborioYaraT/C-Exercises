#include <stdio.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    struct Estudiante estudiante1;
    
    strcpy(estudiante1.nombre, "Juan Perez");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;
    
    printf("Datos del estudiante:\n");
    printf("Nombre: %s\n", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("Promedio: %.2f\n", estudiante1.promedio);
    
    return 0;
}