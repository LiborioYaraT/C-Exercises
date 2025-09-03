#include <stdio.h>

enum Dificultad {
    FACIL,
    MEDIO,
    DIFICIL,
    EXPERTO
};

int main() {
    enum Dificultad nivel;

    printf("Niveles de dificultad disponibles:\n");

    for (nivel = FACIL; nivel <= EXPERTO; nivel++) {
        switch (nivel) {
            case FACIL:
                printf("%d - Fácil\n", nivel);
                break;
            case MEDIO:
                printf("%d - Medio\n", nivel);
                break;
            case DIFICIL:
                printf("%d - Difícil\n", nivel);
                break;
            case EXPERTO:
                printf("%d - Experto\n", nivel);
                break;
        }
    }

    return 0;
}
