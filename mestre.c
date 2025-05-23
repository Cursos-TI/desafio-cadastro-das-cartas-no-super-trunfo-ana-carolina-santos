int main() {
    // Declaração das variáveis para a primeira carta
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nome1[] = "Sao Paulo";
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos_turisticos1 = 50;
    
    // Declaração das variáveis para a segunda carta
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nome2[] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos_turisticos2 = 30;

    // Cálculo da Densidade Populacional e PIB per Capita
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Cálculo do Super Poder
    float super_poder1 = populacao1 + area1 + (pib1 * 1000000000) + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);
    float super_poder2 = populacao2 + area2 + (pib2 * 1000000000) + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    // Exibição das informações cadastradas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km^2\n", area1);  
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade1);  
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n\n", super_poder1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km^2\n", area2);  
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade2);  
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n\n", super_poder2);

    return 0;
} 