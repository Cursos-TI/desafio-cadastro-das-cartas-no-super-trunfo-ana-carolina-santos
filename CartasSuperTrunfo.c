#include <stdio.h>

#include <stdio.h>

#define ESTADOS 8
#define CIDADES 4

// Estrutura para armazenar os dados de uma cidade
typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

int main() {
    Cidade cartas[ESTADOS * CIDADES];
    char estados[ESTADOS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int i, j, index = 0;

    printf("Cadastro de Cartas do Super Trunfo - Países\n\n");

    for (i = 0; i < ESTADOS; i++) {
        for (j = 0; j < CIDADES; j++) {
            printf("Cadastro da cidade %c%02d:\n", estados[i], j+1);

            sprintf(cartas[index].codigo, "%c%02d", estados[i], j+1);
            printf("Populacao: ");
            scanf("%d", &cartas[index].populacao);

            printf("Area (km^2): ");
            scanf("%f", &cartas[index].area);

            printf("PIB (bilhoes): ");
            scanf("%f", &cartas[index].pib);

            printf("Numero de pontos turisticos: ");
            scanf("%d", &cartas[index].pontos_turisticos);

            printf("\n");
            index++;
        }
    }

    printf("\n--- Cartas Cadastradas ---\n");
    for (i = 0; i < ESTADOS * CIDADES; i++) {
        printf("Codigo: %s\n", cartas[i].codigo);
        printf("Populacao: %d\n", cartas[i].populacao);
        printf("Area: %.2f km^2\n", cartas[i].area);
        printf("PIB: %.2f bilhoes\n", cartas[i].pib);
        printf("Pontos Turisticos: %d\n", cartas[i].pontos_turisticos);
        printf("-------------------------\n");
    }

    return 0;
}
