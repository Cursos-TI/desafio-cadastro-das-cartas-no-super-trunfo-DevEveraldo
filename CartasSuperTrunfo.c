// Desafio Super Trunfo - Países
//  Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Calcular a Densidade Populacional: Divida a população da cidade pela sua área.
// Calcular o PIB per Capita: Divida o PIB da cidade pela sua população.
/* Exibir os Resultados: Além de exibir as informações lidas do usuário e exibir a densidade populacional
 e o PIB per capita calculados para cada cidade. Os valores de ponto flutuante com duas casas decimais.*/
 
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
     float densidadePopulacional;  // Novo campo
     float pibPerCapita;          // Novo campo
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
     
     // Cálculos para a primeira carta
     carta1.densidadePopulacional = carta1.populacao / carta1.area;
     carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao; // Convertendo PIB de bilhões para reais
 
 
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
 
     // Cálculos para a segunda carta
     carta2.densidadePopulacional = carta2.populacao / carta2.area;
     carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao; // Convertendo PIB de bilhões para reais
 
     
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
     printf("Densidade Populacional: %.2f habitantes/km²\n", carta1.densidadePopulacional);
     printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);
     
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
     printf("Densidade Populacional: %.2f habitantes/km²\n", carta2.densidadePopulacional);
     printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);
     
     return 0;
 }