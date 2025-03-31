#include <stdio.h>

int main() {
    // --- Declaração de Variáveis para a Carta 1 ---
    char estado1;
    int codigo1;                   // Código: número de 01 a 04
    char nomeCidade1[100];
    unsigned long int populacao1;  // Alterado para unsigned long int
    float area1, pib1;
    int pontos1;
    float densidade1, pibPerCapita1, superPoder1;
    
    // --- Declaração de Variáveis para a Carta 2 ---
    char estado2;
    int codigo2;
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2, superPoder2;
    
    // --- Leitura dos Dados da Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (número de 01 a 04): ");
    scanf("%d", &codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Permite leitura de espaços
    
    printf("Digite a população (unsigned long int): ");
    scanf("%lu", &populacao1);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);
    
    // --- Cálculos para a Carta 1 ---
    densidade1 = populacao1 / area1;                 // Densidade populacional (hab/km²)
    pibPerCapita1 = pib1 / (float)populacao1;          // PIB per capita (conversão para float)
    superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1.0f / densidade1);
    
    // --- Leitura dos Dados da Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (número de 01 a 04): ");
    scanf("%d", &codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("Digite a população (unsigned long int): ");
    scanf("%lu", &populacao2);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);
    
    // --- Cálculos para a Carta 2 ---
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1.0f / densidade2);
    
    // --- Exibição dos Atributos Calculados ---
    printf("\n=== Atributos Calculados ===\n");
    printf("Carta 1 - Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Carta 1 - PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Carta 2 - Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Carta 2 - PIB per Capita: %.2f\n", pibPerCapita2);
    
    // --- Comparação de Cartas ---
    // Neste exemplo, escolhemos comparar a População.
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, populacao2);
    
    // Estrutura de decisão para comparar a população:
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    return 0;
}
