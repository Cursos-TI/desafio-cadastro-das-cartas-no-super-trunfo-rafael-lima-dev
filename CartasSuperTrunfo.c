#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

float calcular_densidade(unsigned long int pop, float area) {
    if (area != 0.0f)
        return pop / area;
    else {
        printf("⚠️  Atenção: Área zero! Densidade definida como 0.\n");
        return 0.0f;
    }
}

float calcular_pib_per_capita(float pib_milhoes, unsigned long int pop) {
    if (pop != 0)
        return (pib_milhoes * 1000000.0f) / pop;
    else {
        printf("⚠️  Atenção: População zero! PIB per capita definido como 0.\n");
        return 0.0f;
    }
}

float inverso_densidade(float densidade) {
    if (densidade != 0.0f)
        return 1.0f / densidade;
    else {
        printf("⚠️  Atenção: Densidade zero! 1/densidade definido como 0.\n");
        return 0.0f;
    }
}

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
    char estado1[30], codigo1[4], cidade1[50];
    unsigned long int populacao1;
    int ponto_turistico1;
    float area1, pib1, densidade1, pib_per_capita1, super_poder1;

    // Variáveis da Carta 2
    char estado2[30], codigo2[4], cidade2[50];
    unsigned long int populacao2;
    int ponto_turistico2;
    float area2, pib2, densidade2, pib_per_capita2, super_poder2;

    // Menu inicial
    int modo_jogo;
    printf("Escolha o modo de jogo:\n");
    printf("1 - Jogar contra outro jogador humano\n");
    printf("2 - Jogar contra o computador\n");
    printf("Opção: ");
    scanf("%d", &modo_jogo);

    // Carta 1
    printf("\n=== CADASTRO DA CARTA DO JOGADOR 1 ===\n");
    printf("Estado (nome completo): "); scanf(" %[^\n]", estado1);
    printf("Código da carta (ex: A01): "); scanf("%s", codigo1);
    printf("Nome da cidade: "); scanf(" %[^\n]", cidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (em milhões): "); scanf("%f", &pib1);
    printf("Pontos turísticos: "); scanf("%d", &ponto_turistico1);

    densidade1 = calcular_densidade(populacao1, area1);
    pib_per_capita1 = calcular_pib_per_capita(pib1, populacao1);
    super_poder1 = populacao1 + area1 + pib1 + ponto_turistico1 + pib_per_capita1 + inverso_densidade(densidade1);

    if (modo_jogo == 1) {
        // Jogador 2 humano
        printf("\n=== CADASTRO DA CARTA DO JOGADOR 2 ===\n");
        printf("Estado (nome completo): "); scanf(" %[^\n]", estado2);
        printf("Código da carta (ex: B02): "); scanf("%s", codigo2);
        printf("Nome da cidade: "); scanf(" %[^\n]", cidade2);
        printf("População: "); scanf("%lu", &populacao2);
        printf("Área (km²): "); scanf("%f", &area2);
        printf("PIB (em milhões): "); scanf("%f", &pib2);
        printf("Pontos turísticos: "); scanf("%d", &ponto_turistico2);
    } else {
        // Carta do computador
        srand(time(NULL));

        char estados[8][30] = {
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
        int codigo_num = (rand() % 4) + 1; // 01 a 04

        strcpy(estado2, estados[index_estado]);
        strcpy(cidade2, cidades[index_estado][index_cidade]);
        sprintf(codigo2, "%c%02d", 'A' + index_estado, codigo_num);

        populacao2 = 100000 + rand() % 900000;
        area2 = 1000.0f + rand() % 5000;
        pib2 = 10000.0f + rand() % 50000;
        ponto_turistico2 = 1 + rand() % 10;
    }

    densidade2 = calcular_densidade(populacao2, area2);
    pib_per_capita2 = calcular_pib_per_capita(pib2, populacao2);
    super_poder2 = populacao2 + area2 + pib2 + ponto_turistico2 + pib_per_capita2 + inverso_densidade(densidade2);

    // Escolha de atributos
    char atributo1, atributo2;
    float valor1_attr1, valor2_attr1, valor1_attr2, valor2_attr2;
    float soma1 = 0, soma2 = 0;

    printf("\n=== ESCOLHA OS ATRIBUTOS ===\n");
    printf("A - População\nB - Área\nC - PIB\nD - Pontos Turísticos\nE - Densidade Demográfica\nF - Super Poder\n");

    printf("Escolha o primeiro atributo: ");
    scanf(" %c", &atributo1);

    do {
        printf("Escolha o segundo atributo (diferente): ");
        scanf(" %c", &atributo2);
    } while (atributo2 == atributo1 || atributo2 == atributo1 + 32 || atributo2 == atributo1 - 32);

    // Atribuição dos valores
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

    soma1 = ((atributo1 == 'E' || atributo1 == 'e') ? (1 / valor1_attr1) : valor1_attr1)
          + ((atributo2 == 'E' || atributo2 == 'e') ? (1 / valor1_attr2) : valor1_attr2);

    soma2 = ((atributo1 == 'E' || atributo1 == 'e') ? (1 / valor2_attr1) : valor2_attr1)
          + ((atributo2 == 'E' || atributo2 == 'e') ? (1 / valor2_attr2) : valor2_attr2);

    // Exibição dos dados
    printf("\n=== DADOS DAS CARTAS ===\n");

    printf("\n%s (%s - %s)\n", modo_jogo == 1 ? "Jogador 1" : "Você", cidade1, estado1, codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f milhões\n", pib1);
    printf("Pontos Turísticos: %d\n", ponto_turistico1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n%s (%s - %s)\n", modo_jogo == 1 ? "Jogador 2" : "Computador", cidade2, estado2, codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f milhões\n", pib2);
    printf("Pontos Turísticos: %d\n", ponto_turistico2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação 1 ou 0 por atributo
    printf("\n=== COMPARAÇÃO INDIVIDUAL DOS ATRIBUTOS ===\n");
    printf("População: %d\n", (populacao1 > populacao2));
    printf("Área: %d\n", (area1 > area2));
    printf("PIB: %d\n", (pib1 > pib2));
    printf("Pontos Turísticos: %d\n", (ponto_turistico1 > ponto_turistico2));
    printf("Densidade (menor vence): %d\n", (densidade1 < densidade2));
    printf("Super Poder: %d\n", (super_poder1 > super_poder2));

    // Resultado final
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Soma dos atributos selecionados:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    if (soma1 > soma2)
        printf("🎉 %s venceu!\n", modo_jogo == 1 ? "Jogador 1" : "Você");
    else if (soma2 > soma1)
        printf("🎉 %s venceu!\n", modo_jogo == 1 ? "Jogador 2" : "Computador");
    else
        printf("⚖️  Empate!\n");

    return 0;
}
