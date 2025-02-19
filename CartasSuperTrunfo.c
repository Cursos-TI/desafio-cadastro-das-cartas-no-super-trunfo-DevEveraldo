// Desafio Super Trunfo - Países
//  Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

#include <stdio.h>

// Definição da estrutura para armazenar os dados de uma carta
struct Carta {
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta carta1, carta2;
    
    // Leitura dos dados da primeira carta
    // Função scanf para capturar as entradas do usuário para cada atributo.
    // Usuário insire as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta1.estado);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", carta1.cidade);
    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    
    // Leitura dos dados da segunda carta
    // Função scanf para capturar as entradas do usuário para cada atributo.
    // Usuário insire as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta2.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", carta2.cidade);
    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    
    // Exibição dos dados da primeira carta
    // Função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exibe os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    
    // Exibição dos dados da segunda carta
    // Função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exibe os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    
    return 0;
}
