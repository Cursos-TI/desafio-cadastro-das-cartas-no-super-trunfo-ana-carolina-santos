#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nome1[] = "Sao Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28; // PIB em bilhões
    int pontos_turisticos1 = 50;

    // Declaração das variáveis para a segunda carta
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nome2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50; // PIB em bilhões
    int pontos_turisticos2 = 30;

    // Cálculo da Densidade Populacional e PIB per Capita
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB para reais

    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2; // Convertendo PIB para reais

    // Exibição das informações cadastradas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area1);  // Corrigido para evitar caracteres especiais
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade1);  // Corrigido
    printf("PIB per Capita: %.2f reais\n\n", pib_per_capita1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);  // Corrigido
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade2);  // Corrigido
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
