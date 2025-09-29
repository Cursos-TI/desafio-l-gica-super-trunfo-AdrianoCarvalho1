#include <stdio.h>
#include <string.h>

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

    // Variáveis para as escolhas do jogador
    int escolha1;
    int escolha2;

    // Variáveis para armazenar os valores dos atributos escolhidos
    float valorAtributo1_Carta1;
    float valorAtributo1_Carta2;
    float valorAtributo2_Carta1;
    float valorAtributo2_Carta2;
    char nomeAtributo1[40];
    char nomeAtributo2[40];

    float somaCarta1;
    float somaCarta2;

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

    densidade2 = (float)populacao2 / area2;

    printf("ESCOLHA O PRIMEIRO ATRIBUTO PARA A BATALHA!\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    // Armazena o valor do primeiro atributo escolhido
    switch (escolha1) {
        case 1:
            valorAtributo1_Carta1 = (float)populacao1;
            valorAtributo1_Carta2 = (float)populacao2;
            strcpy(nomeAtributo1, "Populacao");
            break;

        case 2:
            valorAtributo1_Carta1 = area1;
            valorAtributo1_Carta2 = area2;
            strcpy(nomeAtributo1, "Area");
            break;

        case 3:
            valorAtributo1_Carta1 = pib1;
            valorAtributo1_Carta2 = pib2;
            strcpy(nomeAtributo1, "PIB");
            break;

        case 4:
            valorAtributo1_Carta1 = (float)pontosTuristicos1;
            valorAtributo1_Carta2 = (float)pontosTuristicos2;
            strcpy(nomeAtributo1, "Pontos Turisticos");
            break;

        case 5:
            valorAtributo1_Carta1 = densidade1;
            valorAtributo1_Carta2 = densidade2;
            strcpy(nomeAtributo1, "Densidade Demografica");
            break;

        default:
            printf("\nERRO: Opcao invalida!.\n");
            return 1;
    }

    printf("ESCOLHA O SEGUNDO ATRIBUTO!\n");
    if (escolha1 != 1) printf("1. Populacao\n");
    if (escolha1 != 2) printf("2. Area\n");
    if (escolha1 != 3) printf("3. PIB\n");
    if (escolha1 != 4) printf("4. Pontos Turisticos\n");
    if (escolha1 != 5) printf("5. Densidade Demografica\n"); 
    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1) {
        printf("\nERRO: Opcao invalida ou repetida!.\n");
        return 1;
    }

    switch (escolha2) {
        case 1:
            valorAtributo2_Carta1 = (float)populacao1;
            valorAtributo2_Carta2 = (float)populacao2;
            strcpy(nomeAtributo2, "Populacao");
            break;

        case 2:
            valorAtributo2_Carta1 = area1;
            valorAtributo2_Carta2 = area2;
            strcpy(nomeAtributo2, "Area");
            break;

        case 3:
            valorAtributo2_Carta1 = pib1;
            valorAtributo2_Carta2 = pib2;
            strcpy(nomeAtributo2, "PIB");
            break;

        case 4:
            valorAtributo2_Carta1 = (float)pontosTuristicos1;
            valorAtributo2_Carta2 = (float)pontosTuristicos2;
            strcpy(nomeAtributo2, "Pontos Turisticos");
            break;

        case 5:
            valorAtributo2_Carta1 = densidade1;
            valorAtributo2_Carta2 = densidade2;
            strcpy(nomeAtributo2, "Densidade Demografica");
            break;
    }

    somaCarta1 = valorAtributo1_Carta1 + valorAtributo2_Carta1;
    somaCarta2 = valorAtributo1_Carta2 + valorAtributo2_Carta2;

    printf("RESULTADO DA RODADA\n");
    printf("Atributos em jogo: %s e %s\n", nomeAtributo1, nomeAtributo2);

    // Exibição dos valores e da soma para cada carta
    printf("CARTA 1 - %s:\n", nomePais1);
    printf(" %s: %.2f\n", nomeAtributo1, valorAtributo1_Carta1);
    printf(" %s: %.2f\n", nomeAtributo2, valorAtributo2_Carta1);
    printf(" SOMA TOTAL: %.2f\n\n", somaCarta1);

    printf("CARTA 2 - %s:\n", nomePais2);
    printf(" %s: %.2f\n", nomeAtributo1, valorAtributo1_Carta2);
    printf(" %s: %.2f\n", nomeAtributo2, valorAtributo2_Carta2);
    printf(" SOMA TOTAL: %.2f\n\n", somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf("VENCEDOR: CARTA 1 (%s) venceu com a maior soma!\n", nomePais1);
    } else if (somaCarta2 > somaCarta1) {
        printf("VENCEDOR: CARTA 2 (%s) venceu com a maior soma!\n", nomePais2);
    } else {
        printf("RESULTADO: Houve um EMPATE na soma dos atributos!\n");
    }

    return 0;
}