#include <stdio.h>

int main() {

// Carta número 1 - Recife
    
    char estado = 'A';
    char codigo_da_carta[20] = "A01";
    char nome_da_cidade[20] = "Recife";
    float populacao = 1.48; // em milhões
    float area = 2184; // em quilômetros quadrados
    double pib = 549; // em reais
    int numero_de_pontos_turisticos = 30;

// Imprimindo os dados da Carta 1

    printf("Carta: 1\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %f milhões de pessoas\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);

    printf("\n");  // linha em branco para separar uma carta da outra

 // Carta número 2 - Brasília 

    char estado1 = 'B';
    char codigo_da_carta1[20] = "B02";
    char nome_da_cidade1[20] = "Brasília";
    float populacao1 = 2.81; // em milhões de pessoas 
    float area1 = 5760; // em quilômetros quadrados
    double pib1 = 286; // em reais
    int numero_de_pontos_turisticos1 = 32; 

// Imprimindo os dados da carta 2

    printf("Carta: 2\n"); 
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %f milhões de pessoas\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);

    return 0;
}