// Desafio Super Trunfo - Países
//  Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Calcular a Densidade Populacional: Divida a população da cidade pela sua área.
// Calcular o PIB per Capita: Divida o PIB da cidade pela sua população.
/* Exibir os Resultados: Além de exibir as informações lidas do usuário e exibir a densidade populacional
 e o PIB per capita calculados para cada cidade. Os valores de ponto flutuante com duas casas decimais.*/
// Criar Super Poder
// Comparar cartas do Super Trunfo e determinar a vencedora

#include <stdio.h>
#include <string.h>

// Definição da estrutura para armazenar os dados de uma carta
struct Carta {
    char estado[3];         // Estado da cidade (ex: SP, RJ)
    char codigo[5];         // Código da carta
    char cidade[50];        // Nome da cidade
    int populacao;          // População da cidade
    float area;             // Área da cidade em km²
    float pib;              // PIB da cidade
    int pontosTuristicos;   // Número de pontos turísticos
    float densidadePopulacional;  // Densidade populacional
    float pibPerCapita;     // PIB per capita
};

int main() {
    // Declaração e inicialização das cartas
    struct Carta carta1, carta2;

    // Carta 1 - São Paulo
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo, "A01");
    strcpy(carta1.cidade, "São Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.11;
    carta1.pib = 699.28;
    carta1.pontosTuristicos = 50;

    // Cálculos para a Carta 1
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000.0) / carta1.populacao;

    // Carta 2 - Rio de Janeiro
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo, "B02");
    strcpy(carta2.cidade, "Rio de Janeiro");
    carta2.populacao = 6000000;
    carta2.area = 1200.25;
    carta2.pib = 300.50;
    carta2.pontosTuristicos = 30;

    // Cálculos para a Carta 2
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000.0) / carta2.populacao;

    // Escolha do atributo para comparação
    // Usar um dos seguintes: 
    // - carta1.populacao / carta2.populacao
    // - carta1.area / carta2.area
    // - carta1.pib / carta2.pib
    // - carta1.densidadePopulacional / carta2.densidadePopulacional
    // - carta1.pibPerCapita / carta2.pibPerCapita

    // Comparação de População (como exemplo)
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n\n", carta2.cidade, carta2.estado, carta2.populacao);

    // Lógica de comparação usando if-else
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta1.populacao < carta2.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    // Demonstração de comparação com Densidade Populacional 
    // (onde o menor valor vence)
    printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s (%s): %.2f habitantes/km²\n", 
           carta1.cidade, carta1.estado, carta1.densidadePopulacional);
    printf("Carta 2 - %s (%s): %.2f habitantes/km²\n\n", 
           carta2.cidade, carta2.estado, carta2.densidadePopulacional);

    if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta1.densidadePopulacional > carta2.densidadePopulacional) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}