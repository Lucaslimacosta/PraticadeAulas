#include <stdio.h>

int main() {

    // ====== CARTA 1 ======
    char estado1[30];
    char codigo1[10];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    printf("====== CARTA 1 ======\n");

    printf("Digite o nome do estado: ");
    scanf("%s", estado1);

    printf("Digite a letra do estado (A-H): ");
    scanf("%s", codigo1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);


    // ====== CARTA 2 ======
    char estado2[30];
    char codigo2b[10];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    printf("\n====== CARTA 2 ======\n");

    printf("Digite o nome do estado: ");
    scanf("%s", estado2);

    printf("Digite a letra do estado (A-H): ");
    scanf("%s", codigo2b);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2b);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);


    // ====== EXIBINDO AS DUAS CARTAS ======
    printf("\n====== CARTAS CADASTRADAS ======\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2b);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
