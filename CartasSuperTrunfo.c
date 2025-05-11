#include <stdio.h>

int main() {
    // Definindo as variáveis para armazenar as informações das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    
    // Leitura dos dados da Carta 1
    printf("\n<--- Cadastro da Carta 1 --->\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01, B02): ");
    scanf(" %3s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    // Leitura dos dados da Carta 2
    printf("\n<--- Cadastro da Carta 2 --->\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01, B02): ");
    scanf(" %3s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    // Exibição dos dados das cartas
    printf("\n<--- Carta 1 --->\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
    printf("\n<--- Carta 2 --->\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}


    
    
