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

    printf("Bem-vindo ao jogo de Cartas Super Trunfo!\n");
    printf("Neste jogo, você irá competir com cartas de diferentes categorias.\n");
    printf("Cada carta possui atributos que serão comparados para determinar o vencedor.\n");
    printf("Prepare-se para uma partida emocionante!\n\n");

    // Declaração das variáveis da primeira carta
    char estado1[20], codigo1[4], cidade1[50];
    int populacao1, ponto_turistico1;
    float area1, pib1, densidade1, pib_per_capita1;

    // Declaração das variáveis da segunda carta
    char estado2[20], codigo2[4], cidade2[50];
    int populacao2, ponto_turistico2;
    float area2, pib2, densidade2, pib_per_capita2;

    // Cadastro da primeira carta
    printf("=== CADASTRO DA PRIMEIRA CARTA ===\n");

    printf("Digite o estado (A-H): ");
    scanf("%s", estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);  // Permite espaços

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib1);

    printf("Digite o ponto turístico (quantidade): ");
    scanf("%d", &ponto_turistico1);

    // Calculando dados derivados da primeira carta
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Cadastro da segunda carta
    printf("\n=== CADASTRO DA SEGUNDA CARTA ===\n");

    printf("Digite o estado (A-H): ");
    scanf("%s", estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib2);

    printf("Digite o ponto turístico (quantidade): ");
    scanf("%d", &ponto_turistico2);

    // Calculando dados derivados da segunda carta
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibindo as informações das cartas
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos Turísticos: %d\n", ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f milhões\n", pib_per_capita1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos Turísticos: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f milhões\n", pib_per_capita2);

    printf("\n--- Fim do Cadastro ---\n");

    return 0;
}

    
    
