#include <stdio.h>

int main() {

    float temperatura;

    printf("Digite a temperatura atual em graus Celcius: ");
    if (scanf("%f", &temperatura) != 1) {
        printf("Ta errado isso aí");
        return 1;
    }

    if (temperatura <= 0){
        printf("Com certeza não é no Brasil\n");
        return 0;
    } else if (temperatura <= 10){
        printf("Ta bem frio\n");
        return 0;
    } else if (temperatura <= 25){
        printf("Ta de boa até\n");
        return 0;
    } else if (temperatura <= 35){
        printf("Calor do djabo\n");
        return 0;
    } else {
        printf("Ta no inferno, só pode\n");
        return 0;
    }

}