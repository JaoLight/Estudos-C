#include <stdio.h>

int main() {

    // Principais operadores em C:
    /*
        Soma (+)
        Subtração (-)
        Multiplicação (*)
        Divisão (/)
        Módulo ou Resto (%)
    */

    int num1, num2;
    int soma, subtracao, multiplicacao, divisao, modulo;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    modulo = num1 % num2;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);
    printf("Módulo: %d\n", modulo);

    return 0;
}