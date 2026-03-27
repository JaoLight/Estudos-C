#include <stdio.h>

int main() {

    int num1, num2;

    printf("Digite o primeiro número:\n");
    // Verificação pra ver se a entrada foi um número inteiro ou não
    // Se o resultador for 1, leu um inteiro, mas se for 0, vai dar erro
    if (scanf("%d", &num1) != 1) {
        printf("Dígito inválido\n");
        return 1;
        // Return 1 porque finalizou com erro
    }

    printf("Agora o segundo:\n");
    // Por algum motivo roda o scanf mesmo dentro do if, não sei como mas deixa assim mesmo
    // Caso não dê, é só fazer o if com a variável dps do scanf
    if (scanf("%d", &num2) != 1) {
        printf("Dígito inválido\n");
        return 1;
    }

    if (num1 == num2) {
        printf("Os números são iguais\n");
    } else if (num1 < num2) {
        printf("O %d é maior que %d\n", num2, num1);
    } else if (num1 > num2) {
        printf("O %d é maior que %d\n", num1, num2);
    } else {
        printf("Tem parada errada aí\n");
    }
    // Também pode ser feito com !=, <= e >=

    return 0;

}