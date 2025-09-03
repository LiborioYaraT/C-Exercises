#include <stdio.h>

enum EstadoSemaforo {
    ROJO,
    AMARILLO,
    VERDE
};

int main() {
    int opcion;
    enum EstadoSemaforo estado;

    printf("Ingrese el estado del semáforo (0=Rojo, 1=Amarillo, 2=Verde): ");
    scanf("%d", &opcion);

    if (opcion < 0 || opcion > 2) {
        printf("Estado inválido.\n");
        return 1;
    }

    estado = (enum EstadoSemaforo)opcion;

    switch (estado) {
        case ROJO:
            printf("El semáforo está en ROJO. Deténgase.\n");
            break;
        case AMARILLO:
            printf("El semáforo está en AMARILLO. Precaución.\n");
            break;
        case VERDE:
            printf("El semáforo está en VERDE. Puede avanzar.\n");
            break;
        default:
            printf("Estado desconocido.\n");
    }

    return 0;
}
