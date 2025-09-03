#include <stdio.h>

struct Estudiante {
    char nombre[50];
    float nota;
};

int main() {
    int n;
    float suma = 0;
    
    printf("Ingrese el número de estudiantes: ");
    scanf("%d", &n);
    
    struct Estudiante estudiantes[n];
    
    for (int i = 0; i < n; i++) {
        printf("Ingrese nombre del estudiante %d: ", i+1);
        scanf("%s", estudiantes[i].nombre);
        
        printf("Ingrese nota de %s: ", estudiantes[i].nombre);
        scanf("%f", &estudiantes[i].nota);
        
        suma += estudiantes[i].nota;
    }
    
    float promedio = suma / n;
    printf("\nEl promedio de las notas es: %.2f\n", promedio);
    
    return 0;
}