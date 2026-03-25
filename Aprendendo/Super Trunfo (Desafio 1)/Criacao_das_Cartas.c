#include <stdio.h>

// Criação das cartas para o jogo Super Trunfo

int main() {

    // Dados primeira carta
    char estado1;
    char carta1[3];
    char cidade1[10];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Dados segunda carta
    char estado2;
    char carta2[3];
    char cidade2[10];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Coleta de dados para a primeira carta
    printf("Digite o estado (uma letra de A a H): \n");
    scanf(" %c", &estado1);
    printf("Digite o Número da carta (01 a 04): \n");
    scanf(" %s", carta1);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade1);
    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade (em km²): \n");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib1);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %d", &pontos1);

    printf("Carta criada com sucesso! Segunda Carta:\n");

    // Coleta de dados para a segunda carta
    printf("\nDigite o estado (uma letra de A a H): \n");
    scanf(" %c", &estado2);
    printf("Digite o Número da carta (01 a 40): \n");
    scanf(" %s", carta2);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade2);
    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao2);
    printf("Digite a área da cidade (em km²): \n");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib2);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %d", &pontos2);

    // Exibição dos dados das cartas
    printf("\nCarta: %s \n", carta1);
    printf("Estado: %c \n", estado1);
    printf("Código: %c%s \n", estado1, carta1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de R$ \n", pib1);
    printf("Pontos turísticos: %d \n", pontos1);

    printf("\nCarta: %s \n", carta2);
    printf("Estado: %c \n", estado2);
    printf("Código: %c%s \n", estado2, carta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de R$ \n", pib2);
    printf("Pontos turísticos: %d \n", pontos2);

}