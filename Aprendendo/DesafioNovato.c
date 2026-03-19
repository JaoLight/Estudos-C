#include <stdio.h>
int main(){

    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade \n");
    scanf("%d", &idade);

    printf("Digite sua altura \n");
    scanf("%f", &altura);

    printf("Digite seu nome \n");
    scanf("%s", nome);
    // O scanf para string não precisa do & porque o nome já é um array

    printf("Digite sua matricula \n");
    scanf("%d", &matricula);

    printf("Aluno: %s - Matrícula: %d \n", nome, matricula);
    printf("Idade: %d - Altura: %.2f \n", idade, altura);

    return 0;
    // O return 0; indica que o programa terminou com sucesso
}