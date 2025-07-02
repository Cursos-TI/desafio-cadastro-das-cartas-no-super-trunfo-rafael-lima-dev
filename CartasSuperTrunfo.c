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


    //declaração das variáveis para a primeira carta
    char estado1[20], codigo1[4], cidade1[20];
    int populacao1, ponto_turistico1;
    float area1, pib1;

    //declaração das variáveis para a segunda carta
    char estado2[20], codigo2[4], cidade2[20];
    int populacao2, ponto_turistico2;
    float area2, pib2;

    //cadastro da primeira carta
    printf("=== CADASTRO DA PRIMEIRA CARTA ===\n");

    printf("Digite o estado (A-H): ");
    scanf("%s", codigo1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);    

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib1);


    printf("Digite o ponto turístico: ");
    scanf("%d", &ponto_turistico1);

    //cadastro da segunda carta
    printf("\n=== CADASTRO DA SEGUNDA CARTA ===\n");

    printf("Digite o estado (A-H): ");
    scanf("%s", estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib2);

    printf("Digite o ponto turístico: ");
    scanf("%d", &ponto_turistico2);


    // Exibição das informações das cartas
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Ponto Turístico: %d\n", ponto_turistico1);
    // Exibição das informações da segunda carta
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Ponto Turístico: %d\n", ponto_turistico2);

    
    return 0;
}



    
    
