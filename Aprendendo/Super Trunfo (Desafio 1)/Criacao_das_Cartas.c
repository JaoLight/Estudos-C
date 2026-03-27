#include <stdio.h>

// Criação das cartas para o jogo Super Trunfo

int main() {

    // Dados primeira carta
    char estado1;
    char carta1[3];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float superpoder1;

    // Dados segunda carta
    char estado2;
    char carta2[3];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float superpoder2;

    // Coleta de dados para a primeira carta
    printf("Digite o estado (uma letra de A a H): \n");
    scanf(" %c", &estado1);
    printf("Digite o Número da carta (01 a 04): \n");
    scanf(" %s", carta1);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade1);
    printf("Digite a população da cidade: \n");
    scanf(" %lu", &populacao1);
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
    scanf(" %lu", &populacao2);
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
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km² \n", area1);

    float densidade1 = (float)populacao1 / area1;
    // Transformei a população em float

    printf("Densidade populacional: %.2f habitantes/km² \n", densidade1);
    printf("PIB: %.2f bilhões de R$ \n", pib1);

    float pibPerCapita1 = (float)(pib1 * 1e9) / populacao1;
    // Transformei o PIB em float e coloquei em bilhoes

    printf("PIB per capita: R$%.2f \n", pibPerCapita1);
    printf("Pontos turísticos: %d \n", pontos1);

    superpoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1);
    printf("Superpoder da carta 1: %.2f \n", superpoder1);

    // Carta 2
    printf("\nCarta: %s \n", carta2);
    printf("Estado: %c \n", estado2);
    printf("Código: %c%s \n", estado2, carta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km² \n", area2);

    float densidade2 = (float)populacao2 / area2;
    // Também transformei em float

    printf("Densidade populacional: %.2f habitantes/km² \n", densidade2);
    printf("PIB: %.2f bilhões de R$ \n", pib2);

    float pibPerCapita2 = (float)(pib2 * 1e9) / populacao2;

    printf("PIB per capita: R$%.2f \n", pibPerCapita2);
    printf("Pontos turísticos: %d \n", pontos2);

    superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2);
    printf("Superpoder da carta 2: %.2f \n", superpoder2);


    printf("\nComparação de Cartas:\n\n");

    // População
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);

    // Área
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);

    // PIB
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    // Pontos turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

    // Densidade populacional (MENOR vence)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    // PIB per capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);

    // Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;

}