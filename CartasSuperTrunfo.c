#include <stdio.h>

int main() {
    printf("===========================================\n");
    printf("       🃏  CARTAS SUPER TRUNFO 🃏\n");
    printf("===========================================\n");
    printf("👨 Desenvolvido por Francisco Rafael © 2025\n");
    printf("📦 Versão: 1.0\n");
    printf("📅 Data: 29/06/2025\n");
    printf("📝 Descrição: Jogo de cartas estilo Super Trunfo\n");
    printf("===========================================\n\n");

    // Declaração das variáveis da primeira carta
    char estado1[20], codigo1[4], cidade1[50];
    unsigned long int populacao1;
    int ponto_turistico1;
    float area1, pib1, densidade1, pib_per_capita1, super_poder1;

    // Declaração das variáveis da segunda carta
    char estado2[20], codigo2[4], cidade2[50];
    unsigned long int populacao2;
    int ponto_turistico2;
    float area2, pib2, densidade2, pib_per_capita2, super_poder2;

    // Cadastro da primeira carta
    printf("=== CADASTRO DA PRIMEIRA CARTA ===\n");
    printf("Digite o estado (A-H): ");
    scanf("%s", estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib1);
    printf("Digite o ponto turístico (quantidade): ");
    scanf("%d", &ponto_turistico1);

    // Calculando dados derivados da primeira carta
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + ponto_turistico1 + pib_per_capita1 + (1.0f / densidade1);

    // Cadastro da segunda carta
    printf("\n=== CADASTRO DA SEGUNDA CARTA ===\n");
    printf("Digite o estado (A-H): ");
    scanf("%s", estado2);
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib2);
    printf("Digite o ponto turístico (quantidade): ");
    scanf("%d", &ponto_turistico2);

    // Calculando dados derivados da segunda carta
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + ponto_turistico2 + pib_per_capita2 + (1.0f / densidade2);

    // Exibindo as informações das cartas
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos Turísticos: %d\n", ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f milhões\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %s\n", estado2);    
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos Turísticos: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f milhões\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação dos atributos conforme o enunciado
    printf("\nComparação de Cartas:\n");

      int resultado;

    // População
    resultado = populacao1 > populacao2;
    printf("População: %s venceu (%d)\n", resultado ? "Carta 1" : "Carta 2", resultado);

    // Área
    resultado = area1 > area2;
    printf("Área: %s venceu (%d)\n", resultado ? "Carta 1" : "Carta 2", resultado);

    // PIB
    resultado = pib1 > pib2;
    printf("PIB: %s venceu (%d)\n", resultado ? "Carta 1" : "Carta 2", resultado);

    // Pontos Turísticos
    resultado = ponto_turistico1 > ponto_turistico2;
    printf("Pontos Turísticos: %s venceu (%d)\n", resultado ? "Carta 1" : "Carta 2", resultado);

    // Densidade Populacional (menor vence)
    resultado = densidade1 < densidade2;
    printf("Densidade Populacional: %s venceu (%d)\n", resultado ? "Carta 1" : "Carta 2", resultado);

    // PIB per Capita
    resultado = pib_per_capita1 > pib_per_capita2;
    printf("PIB per Capita: %s venceu (%d)\n", resultado ? "Carta 1" : "Carta 2", resultado);

    // Super Poder
    resultado = super_poder1 > super_poder2;
    printf("Super Poder: %s venceu (%d)\n", resultado ? "Carta 1" : "Carta 2", resultado);

    printf("\n--- Fim do jogo ---\n");
    return 0;
}
    
    
