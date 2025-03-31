#include <stdio.h>

int main() {
    // --- Declaração de Variáveis para a Carta 1 ---
    char estado1;                   // Estado (A a H)
    int codigo1;                    // Código da carta: número de 01 a 04
    char nomeCidade1[100];          // Nome do país (ou cidade)
    unsigned long int populacao1;   // População
    float area1, pib1;              // Área (km²) e PIB (em bilhões de reais)
    int pontos1;                    // Número de pontos turísticos
    float densidade1, pibPerCapita1;  // Atributos calculados
    
    // --- Declaração de Variáveis para a Carta 2 ---
    char estado2;
    int codigo2;
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2;
    
    // --- Leitura dos Dados da Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (número de 01 a 04): ");
    scanf("%d", &codigo1);
    
    printf("Digite o nome do país: ");
    scanf(" %[^\n]", nomeCidade1); // Permite leitura de espaços
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);
    
    // --- Cálculos para a Carta 1 ---
    densidade1 = populacao1 / area1;               // Densidade demográfica (hab/km²)
    pibPerCapita1 = pib1 / (float)populacao1;        // PIB per capita
    
    // --- Leitura dos Dados da Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (número de 01 a 04): ");
    scanf("%d", &codigo2);
    
    printf("Digite o nome do país: ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);
    
    // --- Cálculos para a Carta 2 ---
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;
    
    // --- Exibição dos Atributos Calculados ---
    printf("\n=== Atributos Calculados ===\n");
    printf("Carta 1 - Densidade Demográfica: %.2f hab/km²\n", densidade1);
    printf("Carta 1 - PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Carta 2 - Densidade Demográfica: %.2f hab/km²\n", densidade2);
    printf("Carta 2 - PIB per Capita: %.2f\n", pibPerCapita2);
    
    // --- Menu Interativo para Escolha do Atributo ---
    int opcao;
    printf("\n=== Menu de Comparação ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    
    // --- Lógica de Comparação com Switch e If-Else ---
    switch(opcao) {
        case 1: // População: maior vence
            printf("\nComparação de Cartas (Atributo: População):\n");
            printf("Carta 1 - %s (%c): %d\n", nomeCidade1, estado1, populacao1);
            printf("Carta 2 - %s (%c): %d\n", nomeCidade2, estado2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
            
        case 2: // Área: maior vence
            printf("\nComparação de Cartas (Atributo: Área):\n");
            printf("Carta 1 - %s (%c): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("Carta 2 - %s (%c): %.2f km²\n", nomeCidade2, estado2, area2);
            if (area1 > area2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (area2 > area1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
            
        case 3: // PIB: maior vence
            printf("\nComparação de Cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s (%c): %.2f bilhões\n", nomeCidade1, estado1, pib1);
            printf("Carta 2 - %s (%c): %.2f bilhões\n", nomeCidade2, estado2, pib2);
            if (pib1 > pib2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
            
        case 4: // Pontos Turísticos: maior vence
            printf("\nComparação de Cartas (Atributo: Pontos Turísticos):\n");
            printf("Carta 1 - %s (%c): %d pontos\n", nomeCidade1, estado1, pontos1);
            printf("Carta 2 - %s (%c): %d pontos\n", nomeCidade2, estado2, pontos2);
            if (pontos1 > pontos2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (pontos2 > pontos1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
            
        case 5: // Densidade Demográfica: menor vence
            printf("\nComparação de Cartas (Atributo: Densidade Demográfica):\n");
            printf("Carta 1 - %s (%c): %.2f hab/km²\n", nomeCidade1, estado1, densidade1);
            printf("Carta 2 - %s (%c): %.2f hab/km²\n", nomeCidade2, estado2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (densidade2 < densidade1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
            
        case 6: // PIB per Capita: maior vence
            printf("\nComparação de Cartas (Atributo: PIB per Capita):\n");
            printf("Carta 1 - %s (%c): %.2f\n", nomeCidade1, estado1, pibPerCapita1);
            printf("Carta 2 - %s (%c): %.2f\n", nomeCidade2, estado2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
            
        default:
            printf("\nOpção inválida! Por favor, execute o programa novamente e escolha uma opção válida.\n");
    }
    
    return 0;
}
