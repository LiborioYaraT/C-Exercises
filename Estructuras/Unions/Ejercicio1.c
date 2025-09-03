#include <stdio.h>

union Numero {
    int entero;
    float decimal;
};

int main() {
    union Numero num;
    
    num.entero = 10;
    printf("Como entero: %d\n", num.entero);
    printf("Como float: %f\n", num.decimal);
    
    num.decimal = 3.14;
    printf("\nComo entero: %d\n", num.entero);
    printf("Como float: %f\n", num.decimal);
    
    return 0;
}