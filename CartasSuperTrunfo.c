#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char estado_1[20];
    char estado_2[20];
    char carta_1;
    char carta_2;
    char cidade_1[20];
    char cidade_2[20];
    int populacao_1;
    int populacao_2;
    float area_1;
    float area_2;
    float pib_1;
    float pib_2;
    int pontos_1;
    int pontos_2;

    printf("\n--- CARTA 1 ---\n");
    
    printf("Digite seu Estado: ");
    scanf("%s", estado_1);

    printf("Digite o código da carta: ");
    scanf(" %c",&carta_1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_1);

    printf("Digite o número da população: ");
    scanf("%d", &populacao_1);

    printf("Digite a área: ");
    scanf("%f", &area_1);

    printf("Digite o valor do PIB: ");
    scanf("%f", &pib_1);

    printf("Digite números de pontos turisticos: ");
    scanf("%d", &pontos_1);

    printf("\n--- CARTA2 ---\n");

    printf("Digite seu Estado: ");
    scanf("%s", estado_2);

    printf("Digite o código da carta: ");
    scanf(" %c",&carta_2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_2);

    printf("Digite o número da população: ");
    scanf("%d", &populacao_2);

    printf("Digite a área: ");
    scanf("%f", &area_2);

    printf("Digite o valor do PIB: ");
    scanf("%f", &pib_2);

    printf("Digite números de pontos turisticos: ");
    scanf("%d", &pontos_2);
  //--- CÁLCULOS ---
    float densidade_1 = populacao_1 / area_1;
    float densidade_2 = populacao_2 / area_2;

    float pib_per_capita_1 = pib_1 / populacao_1;
    float pib_per_capita_2 = pib_2 / populacao_2;

//--- RESULTADOS ---

printf("\n--- RESULTADOS CARTA 1 ---\n");
printf("Estado: %s\n", estado_1);
printf("Cidade: %s\n", cidade_1);
printf("Densidade populacional: %.2f habitantes/km²\n", densidade_1);
printf("PIB per capita: %.2f\n", pib_per_capita_1);

printf("\n--- RESULTADOS CARTA 2 ---\n");
printf("Estado: %s\n", estado_2);
printf("Cidade: %s\n", cidade_2);
printf("Densidade populacional: %.2f habitantes/km²\n", densidade_2);
printf("PIB per capita: %.2f/n", pib_per_capita_2);

return 0;
} 
