#include <stdio.h>

int main() {

    // Operadores de Incremento e Decremento

    /*
        Incremento: ++
        Pré-incremento: ++a
        Pós-incremento: a++
        Decremento: --
        Pré-decremento: --a
        Pós-decremento: a--
    */

    int num1;

    printf("Digite um número:\n");
    scanf("%d", &num1);

    while (getchar() != '\n'); // APAGA TUDO DO BUFFER

    printf("Valor inicial: %d\n", num1);
    getchar();
    // Coloquei o getchar so pra testar

     printf("\n--- Pré-incremento (++num1) ---\n");
    printf("Valor antes: %d\n", num1);
    printf("Usando ++num1: %d\n", ++num1);
    printf("Valor depois: %d\n", num1);

    // PÓS-INCREMENTO
    printf("\n--- Pós-incremento (num1++) ---\n");
    printf("Valor antes: %d\n", num1);
    printf("Usando num1++: %d\n", num1++);
    printf("Valor depois: %d\n", num1);

    // PRÉ-DECREMENTO
    printf("\n--- Pré-decremento (--num1) ---\n");
    printf("Valor antes: %d\n", num1);
    printf("Usando --num1: %d\n", --num1);
    printf("Valor depois: %d\n", num1);

    // PÓS-DECREMENTO
    printf("\n--- Pós-decremento (num1--) ---\n");
    printf("Valor antes: %d\n", num1);
    printf("Usando num1--: %d\n", num1--);
    printf("Valor depois: %d\n", num1);

    printf("\nPressione Enter para sair...");
    getchar();

    return 0;

}