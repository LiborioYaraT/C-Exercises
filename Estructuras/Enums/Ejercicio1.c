#include <stdio.h>

enum DiasSemana {
    LUNES = 0,
    MARTES,
    MIERCOLES,
    JUEVES,
    VIERNES,
    SABADO,
    DOMINGO
};

int main() {
    enum DiasSemana dia;
    int valor;

    printf("Ingrese un número del 0 al 6 para un día de la semana (0=Lunes, ..., 6=Domingo): ");
    scanf("%d", &valor);

    if (valor < 0 || valor > 6) {
        printf("Valor inválido.\n");
        return 1;
    }

    dia = (enum DiasSemana)valor;

    switch (dia) {
        case LUNES:
            printf("El día es Lunes.\n");
            break;
        case MARTES:
            printf("El día es Martes.\n");
            break;
        case MIERCOLES:
            printf("El día es Miércoles.\n");
            break;
        case JUEVES:
            printf("El día es Jueves.\n");
            break;
        case VIERNES:
            printf("El día es Viernes.\n");
            break;
        case SABADO:
            printf("El día es Sábado.\n");
            break;
        case DOMINGO:
            printf("El día es Domingo.\n");
            break;
        default:
            printf("Día desconocido.\n");
    }

    return 0;
}
