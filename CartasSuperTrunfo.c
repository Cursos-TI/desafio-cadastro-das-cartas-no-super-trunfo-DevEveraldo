// Desafio Super Trunfo - Países
//  Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Calcular a Densidade Populacional: Divida a população da cidade pela sua área.
// Calcular o PIB per Capita: Divida o PIB da cidade pela sua população.
/* Exibir os Resultados: Além de exibir as informações lidas do usuário e exibir a densidade populacional
 e o PIB per capita calculados para cada cidade. Os valores de ponto flutuante com duas casas decimais.*/
// Criar Super Poder

#include <stdio.h>

// Definição da estrutura para armazenar os dados de uma carta
struct Carta {
    char estado;
    char codigo[4];
    char cidade[50];
    unsigned long int populacao;  // Alterado para unsigned long int
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;            // Novo campo para o Super Poder
};

int main() {
    struct Carta carta1, carta2;
    int resultadoComparacao;
    
    // Leitura dos dados da primeira carta
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta1.estado);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", carta1.cidade);
    printf("Digite a população: ");
    scanf("%lu", &carta1.populacao);  // %lu para unsigned long int
    printf("Digite a área (km²): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    
    // Cálculos para a primeira carta
    carta1.densidadePopulacional = (float)carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000.0) / (float)carta1.populacao;
    
    // Cálculo do Super Poder para carta 1
    // Observe a conversão explícita de tipos para evitar problemas
    carta1.superPoder = (float)carta1.populacao + 
                       carta1.area + 
                       (carta1.pib * 1000000000.0) + 
                       (float)carta1.pontosTuristicos + 
                       carta1.pibPerCapita + 
                       (1.0 / carta1.densidadePopulacional * 1000000.0); // Fator de escala para o inverso da densidade
    
    // Leitura dos dados da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta2.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", carta2.cidade);
    printf("Digite a população: ");
    scanf("%lu", &carta2.populacao);  // %lu para unsigned long int
    printf("Digite a área (km²): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    
    // Cálculos para a segunda carta
    carta2.densidadePopulacional = (float)carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000.0) / (float)carta2.populacao;
    
    // Cálculo do Super Poder para carta 2
    carta2.superPoder = (float)carta2.populacao + 
                       carta2.area + 
                       (carta2.pib * 1000000000.0) + 
                       (float)carta2.pontosTuristicos + 
                       carta2.pibPerCapita + 
                       (1.0 / carta2.densidadePopulacional * 1000000.0); // Fator de escala para o inverso da densidade
    
    // Exibição dos dados da primeira carta
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);
    
    // Exibição dos dados da segunda carta
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);
    
    // Comparação e exibição dos resultados
    printf("\nComparação de Cartas:\n");
    
    // Comparação de População
    resultadoComparacao = carta1.populacao > carta2.populacao;
    printf("População: Carta %d venceu (%d)\n", resultadoComparacao ? 1 : 2, resultadoComparacao);
    
    // Comparação de Área
    resultadoComparacao = carta1.area > carta2.area;
    printf("Área: Carta %d venceu (%d)\n", resultadoComparacao ? 1 : 2, resultadoComparacao);
    
    // Comparação de PIB
    resultadoComparacao = carta1.pib > carta2.pib;
    printf("PIB: Carta %d venceu (%d)\n", resultadoComparacao ? 1 : 2, resultadoComparacao);
    
    // Comparação de Pontos Turísticos
    resultadoComparacao = carta1.pontosTuristicos > carta2.pontosTuristicos;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultadoComparacao ? 1 : 2, resultadoComparacao);
    
    // Comparação de Densidade Populacional (menor valor vence)
    resultadoComparacao = carta1.densidadePopulacional < carta2.densidadePopulacional;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultadoComparacao ? 1 : 2, resultadoComparacao);
    
    // Comparação de PIB per Capita
    resultadoComparacao = carta1.pibPerCapita > carta2.pibPerCapita;
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultadoComparacao ? 1 : 2, resultadoComparacao);
    
    // Comparação de Super Poder
    resultadoComparacao = carta1.superPoder > carta2.superPoder;
    printf("Super Poder: Carta %d venceu (%d)\n", resultadoComparacao ? 1 : 2, resultadoComparacao);
    
    return 0;
}