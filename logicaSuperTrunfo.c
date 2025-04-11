#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

   
// Declaração de variáveis do menu interativo 
int atributo,opcao; // variável para armazenar a escolha do atributo

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

// ***MENU INTERATIVO NO TERMINAL***
// Apresentação do menu e captura de opção do usuário
printf("***COMPARAÇÃO DE CARTAS POR ATRIBUTO***:\n"); // solicita ao usuário que digite um número
printf("Escolha um atributo para comparar:\n"); // solicita ao usuário que escolha um atributo
printf("1. População\n"); // imprime a opção 1
printf("2. Área\n"); // imprime a opção 2
printf("3. PIB\n"); // imprime a opção 3
printf("4. Número de pontos turísticos\n"); // imprime a opção 4
printf("5. Densidade demográfica\n"); // imprime a opção 5
scanf("%d", &atributo); // lê o número digitado pelo usuário e armazena na variável atributo

// ESTRUTURA DE CONTROLE SWITCH - COM CINCO POSSIBILIDADES DE ATRIBUTOS
switch(atributo) { // inicia a estrutura switch com a variável atributo
    case 1: // população
        printf("Você escolheu o atributo População.\n"); // imprime que o jogador escolheu o atributo população
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
    break; 

    case 2: // área
        printf("Você escolheu o atributo Área.\n"); // imprime que o jogador escolheu o atributo área
        printf("Comparação das cartas: Atributo Área (em km²):\n");
printf("Carta 1 - %s: %.2f km²\n", nome_da_cidade, area); // Imprime o nome da cidade e a área da carta 1
printf("Carta 2 - %s: %.2f km²\n", nome_da_cidade2, area2); // Imprime o nome da cidade e a área da carta 2
if (area > area2) {
    printf("Resultado:Carta 1  - %s venceu!\n", nome_da_cidade); // Se a área da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
}
else if (area < area2) {
    printf("Resultado:Carta 2  - %s venceu!\n", nome_da_cidade2); // Se a área da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
}
else {
    printf("Resultado:Empate!\n"); // Se as áreas forem iguais, imprime que as cartas são iguais

}
    break; 

    case 3: // PIB
        printf("Você escolheu o atributo PIB.\n"); // imprime que o jogador escolheu o atributo PIB
        printf("Comparação das cartas: Atributo PIB (Em bilhões):\n");
printf("Carta 1 - %s: %.2f bilhões de reais\n", nome_da_cidade, pib); // Imprime o nome da cidade e o PIB da carta 1
printf("Carta 2 - %s: %.2f bilhões de reais\n", nome_da_cidade2, pib2); // Imprime o nome da cidade e o PIB da carta 2
if (pib > pib2) {
    printf("Resultado:Carta 1  - %s venceu!\n", nome_da_cidade); // Se o PIB da carta 1 for maior que o da carta 2, imprime que a carta 1 é maior
}
else if (pib < pib2) {
    printf("Resultado:Carta 2  - %s venceu!\n", nome_da_cidade2); // Se o PIB da carta 2 for maior que o da carta 1, imprime que a carta 2 é maior
}
else {
    printf("Resultado:Empate!\n"); // Se os PIBs forem iguais, imprime que as cartas são iguais

}
    break; 

    case 4: // número de pontos turísticos
        printf("Você escolheu o atributo Número de pontos turísticos.\n"); // imprime que o jogador escolheu o atributo número de pontos turísticos
        printf("Comparação das cartas: Atributo Número de pontos turísticos:\n");
printf("Carta 1 - %s: %d pontos turísticos\n", nome_da_cidade, numero_de_pontos_turisticos); // Imprime o nome da cidade e o número de pontos turísticos da carta 1
printf("Carta 2 - %s: %d pontos turísticos\n", nome_da_cidade2, numero_de_pontos_turisticos2); // Imprime o nome da cidade e o número de pontos turísticos da carta 2
if (numero_de_pontos_turisticos > numero_de_pontos_turisticos2) {
    printf("Resultado:Carta 1  - %s venceu!\n", nome_da_cidade); // Se o número de pontos turísticos da carta 1 for maior que o da carta 2, imprime que a carta 1 é maior
}
else if (numero_de_pontos_turisticos < numero_de_pontos_turisticos2) {
    printf("Resultado:Carta 2  - %s venceu!\n", nome_da_cidade2); // Se o número de pontos turísticos da carta 2 for maior que o da carta 1, imprime que a carta 2 é maior
}
else {
    printf("Resultado:Empate!\n"); // Se os números de pontos turísticos forem iguais, imprime que as cartas são iguais
    
}
    break; 

    case 5: //Densidade demográfica - quem tiver a menor vence!
        printf("Você escolheu o atributo Densidade demográfica.\n"); // imprime que o jogador escolheu o atributo densidade demográfica
        printf("Comparação das cartas: Atributo Densidade demográfica:\n");
printf("Carta 1 - %s: %.2f habitantes/km²\n", nome_da_cidade, densidade_demografica); // Imprime o nome da cidade e a densidade demográfica da carta 1
printf("Carta 2 - %s: %.2f habitantes/km²\n", nome_da_cidade2, densidade_demografica2); // Imprime o nome da cidade e a densidade demográfica da carta 2
if (densidade_demografica < densidade_demografica2) {
    printf("Resultado:Carta 1  - %s venceu!\n", nome_da_cidade); // Se a densidade demográfica da carta 1 for menor que a da carta 2, imprime que a carta 1 é maior
}
else if (densidade_demografica > densidade_demografica2) {
    printf("Resultado:Carta 2  - %s venceu!\n", nome_da_cidade2); // Se a densidade demográfica da carta 2 for menor que a da carta 1, imprime que a carta 2 é maior
}
else {
    printf("Resultado:Empate!\n"); // Se as densidades demográficas forem iguais, imprime que as cartas são iguais  
}
    break; 
    default: // valor inválido
        printf("Valor inválido. Tente novamente.\n"); // imprime que o valor é inválido

}







} // Fim do programa