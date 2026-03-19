#include <stdio.h>
int main(){

    /*
        int = numero inteiro
        float = numero decimal
        double = numero decimal com mais casas decimais
        char = caractere
        void = vazio (sem valor)
    */

    int idade = 19;
    float altura = 1.70;
    char nome[10] = "Joao";

    /*
        %d = numero inteiro
        %i = numero inteiro (mesmo que %d)
        %f = numero decimal
        %e = numero decimal em notação cientifica
        %s = string (texto)
        %c = caractere
    */

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Seu nome é: %s\n", nome);
    printf("Sua idade é: %d\n", idade);
    printf("Sua altura é: %.2f\n", altura);

}