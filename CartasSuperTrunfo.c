#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    // Cabeçalho
    printf("===========================================\n");
    printf("       🃏  CARTAS SUPER TRUNFO 🃏\n");
    printf("===========================================\n");
    printf("👨 Desenvolvido por Francisco Rafael © 2025\n");
    printf("📦 Versão: Final\n");
    printf("📅 Data: 24/07/2025\n");
    printf("📝 Descrição: Comparação com dois atributos\n");
    printf("===========================================\n\n");

    // Variáveis da Carta 1
    char estado1[20], codigo1[4], cidade1[50];
    unsigned long int populacao1;
    int ponto_turistico1;
    float area1, pib1, densidade1, pib_per_capita1, super_poder1;

    // Variáveis da Carta 2 (pode ser humano ou computador)
    char estado2[20], codigo2[4], cidade2[50];
    unsigned long int populacao2;
    int ponto_turistico2;
    float area2, pib2, densidade2, pib_per_capita2, super_poder2;

    int modo_jogo;

    // Escolha do modo de jogo
    printf("Escolha o modo de jogo:\n");
    printf("1 - Jogar contra outro jogador humano\n");
    printf("2 - Jogar contra o computador\n");
    printf("Opção: ");
    scanf("%d", &modo_jogo);

    // Cadastro do jogador 1 (sempre obrigatório)
    printf("\n=== CADASTRO DA CARTA DO JOGADOR 1 ===\n");
    printf("Estado (A-H): "); scanf("%s", estado1);
    printf("Código da carta (ex: A01): "); scanf("%s", codigo1);
    printf("Nome da cidade: "); scanf(" %[^\n]", cidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (milhões): "); scanf("%f", &pib1);
    printf("Pontos turísticos: "); scanf("%d", &ponto_turistico1);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + ponto_turistico1 + pib_per_capita1 + (1.0f / densidade1);

    if (modo_jogo == 1) {
        // Cadastro do jogador 2 humano
        printf("\n=== CADASTRO DA CARTA DO JOGADOR 2 ===\n");
        printf("Estado (A-H): "); scanf("%s", estado2);
        printf("Código da carta (ex: A01): "); scanf("%s", codigo2);
        printf("Nome da cidade: "); scanf(" %[^\n]", cidade2);
        printf("População: "); scanf("%lu", &populacao2);
        printf("Área (km²): "); scanf("%f", &area2);
        printf("PIB (milhões): "); scanf("%f", &pib2);
        printf("Pontos turísticos: "); scanf("%d", &ponto_turistico2);

        densidade2 = populacao2 / area2;
        pib_per_capita2 = pib2 / populacao2;
        super_poder2 = populacao2 + area2 + pib2 + ponto_turistico2 + pib_per_capita2 + (1.0f / densidade2);
    } else {
        // Geração da carta do computador
        srand(time(NULL));

        char estados[8][20] = {
            "Acre", "Bahia", "Ceará", "Distrito Federal",
            "Espírito Santo", "Fronteira Sul", "Goiás", "Harmonia"
        };

        char cidades[8][3][50] = {
            {"Rio Branco", "Cruzeiro do Sul", "Sena Madureira"},
            {"Salvador", "Feira de Santana", "Ilhéus"},
            {"Fortaleza", "Juazeiro do Norte", "Sobral"},
            {"Brasília", "Planaltina", "Taguatinga"},
            {"Vitória", "Vila Velha", "Cachoeiro de Itapemirim"},
            {"Pelotas", "Bagé", "Santana do Livramento"},
            {"Goiânia", "Anápolis", "Rio Verde"},
            {"Harmonia Central", "Jardim Harmonia", "Vale Harmônico"}
        };

        int index_estado = rand() % 8;
        int index_cidade = rand() % 3;

        strcpy(estado2, estados[index_estado]);
        strcpy(cidade2, cidades[index_estado][index_cidade]);
        codigo2[0] = 'A' + index_estado;
        codigo2[1] = '0';
        codigo2[2] = '1';
        codigo2[3] = '\0';

        populacao2 = 100000 + rand() % 900000;
        area2 = 1000.0f + rand() % 5000;
        pib2 = 10000.0f + rand() % 50000;
        ponto_turistico2 = 1 + rand() % 10;

        densidade2 = populacao2 / area2;
        pib_per_capita2 = pib2 / populacao2;
        super_poder2 = populacao2 + area2 + pib2 + ponto_turistico2 + pib_per_capita2 + (1.0f / densidade2);
    }

    // Escolha de atributos
    char atributo1, atributo2;
    float valor1_attr1, valor2_attr1, valor1_attr2, valor2_attr2;
    float soma1 = 0, soma2 = 0;

    printf("\n=== ESCOLHA OS ATRIBUTOS ===\n");
    printf("A - População\nB - Área\nC - PIB\nD - Pontos Turísticos\nE - Densidade Demográfica\nF - Super Poder\n");

    printf("Escolha o primeiro atributo: ");
    scanf(" %c", &atributo1);

    printf("Escolha o segundo atributo (diferente do primeiro): ");
    do {
        scanf(" %c", &atributo2);
        if (atributo2 == atributo1 || atributo2 == atributo1 + 32 || atributo2 == atributo1 - 32)
            printf("Repetido. Escolha outro: ");
    } while (atributo2 == atributo1 || atributo2 == atributo1 + 32 || atributo2 == atributo1 - 32);

    // Mapeamento dos valores
    switch (atributo1) {
        case 'A': case 'a': valor1_attr1 = populacao1; valor2_attr1 = populacao2; break;
        case 'B': case 'b': valor1_attr1 = area1; valor2_attr1 = area2; break;
        case 'C': case 'c': valor1_attr1 = pib1; valor2_attr1 = pib2; break;
        case 'D': case 'd': valor1_attr1 = ponto_turistico1; valor2_attr1 = ponto_turistico2; break;
        case 'E': case 'e': valor1_attr1 = densidade1; valor2_attr1 = densidade2; break;
        case 'F': case 'f': valor1_attr1 = super_poder1; valor2_attr1 = super_poder2; break;
    }

    switch (atributo2) {
        case 'A': case 'a': valor1_attr2 = populacao1; valor2_attr2 = populacao2; break;
        case 'B': case 'b': valor1_attr2 = area1; valor2_attr2 = area2; break;
        case 'C': case 'c': valor1_attr2 = pib1; valor2_attr2 = pib2; break;
        case 'D': case 'd': valor1_attr2 = ponto_turistico1; valor2_attr2 = ponto_turistico2; break;
        case 'E': case 'e': valor1_attr2 = densidade1; valor2_attr2 = densidade2; break;
        case 'F': case 'f': valor1_attr2 = super_poder1; valor2_attr2 = super_poder2; break;
    }

    // Soma dos atributos com tratamento para densidade
    soma1 = ((atributo1 == 'E' || atributo1 == 'e') ? (1 / valor1_attr1) : valor1_attr1)
          + ((atributo2 == 'E' || atributo2 == 'e') ? (1 / valor1_attr2) : valor1_attr2);

    soma2 = ((atributo1 == 'E' || atributo1 == 'e') ? (1 / valor2_attr1) : valor2_attr1)
          + ((atributo2 == 'E' || atributo2 == 'e') ? (1 / valor2_attr2) : valor2_attr2);

    // Exibição
    printf("\n=== RESULTADO ===\n");
    printf("Jogador 1: %s - %s (%s)\n", estado1, cidade1, codigo1);
    printf(modo_jogo == 1 ? "Jogador 2: %s - %s (%s)\n" : "Computador: %s - %s (%s)\n", estado2, cidade2, codigo2);

    printf("Atributo 1 (%c): %.2f x %.2f\n", atributo1, valor1_attr1, valor2_attr1);
    printf("Atributo 2 (%c): %.2f x %.2f\n", atributo2, valor1_attr2, valor2_attr2);

    printf("Soma dos atributos - %s: %.2f\n", cidade1, soma1);
    printf("Soma dos atributos - %s: %.2f\n", cidade2, soma2);

    printf("Resultado: ");
    soma1 > soma2 ? printf("🎉 Jogador 1 venceu!\n") :
    soma2 > soma1 ? printf(modo_jogo == 1 ? "🎉 Jogador 2 venceu!\n" : "🤖 Computador venceu!\n") :
                    printf("⚖️ Empate!\n");

    return 0;
}
