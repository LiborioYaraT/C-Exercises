#include <stdio.h>
#include <string.h>

struct Libro {
    char titulo[100];
    char autor[100];
    int año;
};

int main() {
    struct Libro libros[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Ingrese datos del libro %d:\n", i+1);
        printf("Título: ");
        fgets(libros[i].titulo, sizeof(libros[i].titulo), stdin);
        libros[i].titulo[strcspn(libros[i].titulo, "\n")] = '\0';
        
        printf("Autor: ");
        fgets(libros[i].autor, sizeof(libros[i].autor), stdin);
        libros[i].autor[strcspn(libros[i].autor, "\n")] = '\0';
        
        printf("Año: ");
        scanf("%d", &libros[i].año);
        while (getchar() != '\n'); // Limpiar buffer
    }
    
    printf("\nInformación de los libros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Libro %d:\n", i+1);
        printf("  Título: %s\n", libros[i].titulo);
        printf("  Autor: %s\n", libros[i].autor);
        printf("  Año: %d\n\n", libros[i].año);
    }
    
    return 0;
}