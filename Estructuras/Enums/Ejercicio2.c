#include <stdio.h>

enum Meses {
    ENERO = 1,
    FEBRERO,
    MARZO,
    ABRIL,
    MAYO,
    JUNIO,
    JULIO,
    AGOSTO,
    SEPTIEMBRE,
    OCTUBRE,
    NOVIEMBRE,
    DICIEMBRE
};

int main() {
    int num;
    enum Meses mes;

    printf("Ingrese un número del 1 al 12 para un mes del año: ");
    scanf("%d", &num);

    if (num < 1 || num > 12) {
        printf("Número inválido.\n");
        return 1;
    }

    mes = (enum Meses)num;

    switch (mes) {
        case ENERO:
            printf("El mes es Enero.\n");
            break;
        case FEBRERO:
            printf("El mes es Febrero.\n");
            break;
        case MARZO:
            printf("El mes es Marzo.\n");
            break;
        case ABRIL:
            printf("El mes es Abril.\n");
            break;
        case MAYO:
            printf("El mes es Mayo.\n");
            break;
        case JUNIO:
            printf("El mes es Junio.\n");
            break;
        case JULIO:
            printf("El mes es Julio.\n");
            break;
        case AGOSTO:
            printf("El mes es Agosto.\n");
            break;
        case SEPTIEMBRE:
            printf("El mes es Septiembre.\n");
            break;
        case OCTUBRE:
            printf("El mes es Octubre.\n");
            break;
        case NOVIEMBRE:
            printf("El mes es Noviembre.\n");
            break;
        case DICIEMBRE:
            printf("El mes es Diciembre.\n");
            break;
        default:
            printf("Mes desconocido.\n");
    }

    return 0;
}
