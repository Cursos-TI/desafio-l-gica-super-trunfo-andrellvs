#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
 
// Declaração de variáveis "carta" nr1
char estado_da_carta,codigo_da_carta[4],nome_da_cidade[100];  // char (caractere) para armazenar letras e strings
int populacao, numero_de_pontos_turisticos; // inteiro (int) para armazenar números inteiros
float area,pib; // ponto flutuante (float) para armazenar números decimais

// Declaração de variáveis "carta" nr2
char estado_da_carta2,codigo_da_carta2[4],nome_da_cidade2[100]; // char (caractere) para armazenar letras e strings
int populacao2, numero_de_pontos_turisticos2; // inteiro (int) para armazenar números inteiros
float area2,pib2; // ponto flutuante (float) para armazenar números decimais

// Entrada de dados nr1
printf("Digite o estado (letra de A a H): \n");
scanf(" %c", &estado_da_carta); // Lê um caractere (letra) e ignora espaços em branco

printf("Digite o código da carta (ex: A01): \n");
scanf(" %s", &codigo_da_carta); // Lê uma string (código da carta) até o espaço ou Enter

printf("Digite o nome da cidade: \n");
scanf(" %[^\n]", nome_da_cidade);  // Lê até o Enter (inclusive espaços)

printf("Digite a população: \n");
scanf("%d", &populacao); // Lê um número inteiro (população)

printf("Digite a área (em km²): \n");
scanf("%f", &area); // Lê um número decimal (área)

printf("Digite o PIB (em bilhões de reais): \n");
scanf("%f", &pib); // Lê um número decimal (PIB)

printf("Digite o número de pontos turísticos da Carta 1: \n");
scanf("%d", &numero_de_pontos_turisticos);

// Calculo da densidade populacional
float densidade_demografica = (float)populacao / area; // Calcula a densidade populacional (população/área)

// Calculo do PIB per capita
float pib_per_capita = pib * 1000000000 / populacao; // Calcula o PIB per capita (PIB/população)
// pib * 1000000000 converte o PIB de bilhões para reais, e depois divide pela população para obter o PIB per capita

// Entrada de dados nr2
printf("Digite o estado (letra de A a H): \n");        
scanf(" %c", &estado_da_carta2); // Lê um caractere (letra) e ignora espaços em branco

printf("Digite o código da carta (ex: A01): \n");   
scanf(" %s", &codigo_da_carta2); // Lê uma string (código da carta) até o espaço ou Enter

printf("Digite o nome da cidade: \n"); 
scanf(" %[^\n]", nome_da_cidade2); // Lê até o Enter (inclusive espaços)

printf("Digite a população: \n");
scanf("%d", &populacao2); // Lê um número inteiro (população)

printf("Digite a área (em km²): \n"); 
scanf("%f", &area2); // Lê um número decimal (área)

printf("Digite o PIB (em bilhões de reais): \n"); 
scanf("%f", &pib2); // Lê um número decimal (PIB)

printf("Digite o número de pontos turísticos da Carta 2: \n"); // Lê o número de pontos turísticos
scanf("%d", &numero_de_pontos_turisticos2); // Lê um número inteiro (número de pontos turísticos)
printf("\n"); // Adiciona uma linha em branco para separar as cartas

// Calculo da densidade populacional 2
float densidade_demografica2 = (float)populacao2 / area2; // Calcula a densidade populacional (população/área)

// Calculo do PIB per capita 2
float pib_per_capita2 = pib2 * 1000000000 / populacao2; // Calcula o PIB per capita (PIB/população) 
// pib2 * 1000000000 converte o PIB de bilhões para reais, e depois divide pela população para obter o PIB per capita

// Comparação das cartas
printf("Comparação das cartas: Atributo População:\n");
printf("Carta 1 - %s: %d habitantes\n", nome_da_cidade, populacao); // Imprime o nome da cidade e a população da carta 1
printf("Carta 2 - %s: %d habitantes\n", nome_da_cidade2, populacao2); // Imprime o nome da cidade e a população da carta 2
if (populacao > populacao2) {
    printf("Resultado:Carta 1  - %s venceu!\n", nome_da_cidade); // Se a população da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
}
else if (populacao < populacao2) {
    printf("Resultado:Carta 2  - %s venceu!\n", nome_da_cidade2); // Se a população da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
}
else {
    printf("Resultado:Empate!\n"); // Se as populações forem iguais, imprime que as cartas são iguais
} 

     return 0; // Retorna 0 para indicar que o programa foi executado com sucesso




} // Fim do programa