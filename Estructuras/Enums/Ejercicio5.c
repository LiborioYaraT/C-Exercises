#include <stdio.h>

enum Colores {
    ROJO,
    VERDE,
    AZUL,
    AMARILLO,
    NARANJA,
    MORADO,
    CANTIDAD_COLORES  // Este valor nos ayuda a saber cuántos elementos hay
};

int main() {
    enum Colores color;

    printf("Lista de colores:\n");

    for (color = ROJO; color < CANTIDAD_COLORES; color++) {
        switch (color) {
            case ROJO:
                printf("%d - Rojo\n", color);
                break;
            case VERDE:
                printf("%d - Verde\n", color);
                break;
            case AZUL:
                printf("%d - Azul\n", color);
                break;
            case AMARILLO:
                printf("%d - Amarillo\n", color);
                break;
            case NARANJA:
                printf("%d - Naranja\n", color);
                break;
            case MORADO:
                printf("%d - Morado\n", color);
                break;
            default:
                printf("%d - Color desconocido\n", color);
        }
    }

    return 0;
}
