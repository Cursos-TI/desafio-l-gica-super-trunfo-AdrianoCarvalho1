#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char nomePais1[40];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;

    // Variáveis para a Carta 2
    char nomePais2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;

    // Variável para a escolha do menu
    int opcao;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Nome do Pais: ");
    scanf(" %[^\n]", nomePais1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade para a Carta 1
    densidade1 = (float)populacao1 / area1;

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Nome do Pais: ");
    scanf(" %[^\n]", nomePais2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    
    // Cálculo da densidade para a Carta 2
    densidade2 = (float)populacao2 / area2;

    // Menu interativo
    printf("ESCOLHA UM ATRIBUTO PARA A BATALHA!\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);

    // Comparaçâo com Switch
    switch (opcao) {
        case 1:
            printf("\nAtributo Escolhido: Populacao\n");
            printf("Carta 1 - %s: %d habitantes\n", nomePais1, populacao1);
            printf("Carta 2 - %s: %d habitantes\n", nomePais2, populacao2);
        
            if (populacao1 > populacao2) {
                printf("Resultado: CARTA 1 (%s) VENCEU!\n", nomePais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: CARTA 2 (%s) VENCEU!\n", nomePais2);
            } else {
                printf("Resultado: EMPATE!\n");
            }
            break;

        case 2:
            printf("\nAtributo Escolhido: Area\n");
            printf("Carta 1 - %s: %.2f km²\n", nomePais1, area1);
            printf("Carta 2 - %s: %.2f km²\n", nomePais2, area2);
            
            if (area1 > area2) {
                printf("Resultado: CARTA 1 (%s) VENCEU!\n", nomePais1);
            } else if (area2 > area1) {
                printf("Resultado: CARTA 2 (%s) VENCEU!\n", nomePais2);
            } else {
                printf("Resultado: EMPATE!\n");
            }
            break;

        case 3:
            printf("\nAtributo Escolhido: PIB\n");
            printf("Carta 1 - %s: %.2f bilhoes\n", nomePais1, pib1);
            printf("Carta 2 - %s: %.2f bilhoes\n", nomePais2, pib2);
            
            if (pib1 > pib2) {
                printf("Resultado: CARTA 1 (%s) VENCEU!\n", nomePais1);
            } else if (pib2 > pib1) {
                printf("Resultado: CARTA 2 (%s) VENCEU!\n", nomePais2);
            } else {
                printf("Resultado: EMPATE!\n");
            }
            break;

        case 4:
            printf("\nAtributo Escolhido: Pontos Turisticos\n");
            printf("Carta 1 - %s: %d pontos\n", nomePais1, pontosTuristicos1);
            printf("Carta 2 - %s: %d pontos\n", nomePais2, pontosTuristicos2);
            
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: CARTA 1 (%s) VENCEU!\n", nomePais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: CARTA 2 (%s) VENCEU!\n", nomePais2);
            } else {
                printf("Resultado: EMPATE!\n");
            }
            break;

        case 5:
            printf("\nAtributo Escolhido: Densidade Demografica\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", nomePais1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km²\n", nomePais2, densidade2);
            
            if (densidade1 < densidade2) {
                printf("Resultado: CARTA 1 (%s) VENCEU! (Menor densidade)\n", nomePais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: CARTA 2 (%s) VENCEU! (Menor densidade)\n", nomePais2);
            } else {
                printf("Resultado: EMPATE!\n");
            }
            break;
            
        default: 
            printf("\nERRO: Opcao invalida!\n");
            break;
    }

    return 0;
}