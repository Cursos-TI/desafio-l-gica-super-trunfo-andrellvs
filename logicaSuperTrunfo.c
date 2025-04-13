#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

   
// Declaração de variáveis do menu interativo 
int atributo,atributo2,opcao,opcao2; // variável para armazenar a escolha do atributo

// Declaração de variáveis "carta" nr1
char estado_da_carta,codigo_da_carta[4],nome_do_pais[100];  // char (caractere) para armazenar letras e strings
int populacao, numero_de_pontos_turisticos; // inteiro (int) para armazenar números inteiros
float area,pib; // ponto flutuante (float) para armazenar números decimais

// Declaração de variáveis "carta" nr2
char estado_da_carta2,codigo_da_carta2[4],nome_do_pais2[100]; // char (caractere) para armazenar letras e strings
int populacao2, numero_de_pontos_turisticos2; // inteiro (int) para armazenar números inteiros
float area2,pib2; // ponto flutuante (float) para armazenar números decimais

// Entrada de dados nr1
printf("Digite o estado (letra de A a H): \n");
scanf(" %c", &estado_da_carta); // Lê um caractere (letra) e ignora espaços em branco

printf("Digite o código da carta (ex: A01): \n");
scanf(" %s", &codigo_da_carta); // Lê uma string (código da carta) até o espaço ou Enter

printf("Digite o nome do país: \n");
scanf(" %[^\n]", nome_do_pais);  // Lê até o Enter (inclusive espaços)

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

printf("Digite o nome do país: \n"); 
scanf(" %[^\n]", nome_do_pais2); // Lê até o Enter (inclusive espaços)

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


// PRIMEIRO MENU COM SETE OPÇÕES
printf("\n"); 
printf("############################################\n"); // Imprime uma linha de separação
printf("***COMPARADOR DE CARTAS***:\n"); 
printf("Escolha dois atributos para comparar:\n"); 
printf("############################################\n"); // Imprime uma linha de separação
printf("1. População\n"); // Opção 1
printf("2. Área\n"); // Opção 2
printf("3. PIB\n"); // Opção 3
printf("4. Densidade Demográfica\n"); // Opção 4
printf("5. PIB per capita\n"); // Opção 5
printf("6. Número de Pontos Turísticos\n"); // Opção 6
printf("7. Sair\n"); // Opção 7
scanf("%d", &opcao); // Lê a opção escolhida pelo usuário

// SEGUNDO MENU COM SEIS OPÇÕES [ESTRUTURA SWITCH]
switch(opcao){ // Inicia o switch para verificar a opção escolhida
    case 1: // Opção 1 - O usuário já escolheu 1.População
        printf("\n"); 
        printf("Voce escolheu POPULAÇÃO, escolha o segundo atributo agora:\n"); // Imprime que o jogador escolheu o atributo população
        // printf("1. População\n"); // Opção 1
        printf("2. Área\n"); // Opção 2
        printf("3. PIB\n"); // Opção 3
        printf("4. Densidade Demográfica\n"); // Opção 4
        printf("5. PIB per capita\n"); // Opção 5
        printf("6. Número de Pontos Turísticos\n"); // Opção 6
        printf("7. Sair\n"); // Opção 7
        scanf("%d", &opcao2); // Lê a opção escolhida pelo usuário
         
                    // RESULTANTE FINAL AGORA DEMONSTRANDO AS DUAS ESCOLHAS
                    switch(opcao2){ // Inicia o switch para verificar a opção escolhida
                        case 2: // O usuário escolheu Opção 1 População e Opção 2 - Área

                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: POPULAÇÃO E ÁREA\n"); 

                            printf("Carta 1 - %s: %d habitantes e %.2f km²\n", nome_do_pais, populacao, area); // Imprime o nome da cidade, população e área da carta 1
                            printf("Carta 2 - %s: %d habitantes e %.2f km²\n", nome_do_pais2, populacao2, area2); // Imprime o nome da cidade, população e área da carta 2
                            
                            printf("Soma de atributos Carta 1: %d + %.2f = %.2f\n", populacao, area, populacao + area); // Imprime a soma dos atributos da carta 1
                            printf("Soma de atributos Carta 2: %d + %.2f = %.2f\n", populacao2, area2, populacao2 + area2); // Imprime a soma dos atributos da carta 2
                           
                            if (populacao + area > populacao2 + area2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            } else if (populacao + area < populacao2 + area2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch    
                         
                            case 3: // O usuário escolheu Opção 1 População e Opção 3 - PIB
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: POPULAÇÃO E PIB\n"); 

                            printf("Carta 1 - %s: %d habitantes e %.2f bilhões de reais\n", nome_do_pais, populacao, pib); // Imprime o nome da cidade, população e PIB da carta 1
                            printf("Carta 2 - %s: %d habitantes e %.2f bilhões de reais\n", nome_do_pais2, populacao2, pib2); // Imprime o nome da cidade, população e PIB da carta 2
                            
                            printf("Soma de atributos Carta 1: %d + %.2f = %.2f\n", populacao, pib, populacao + pib); // Imprime a soma dos atributos da carta 1
                            printf("Soma de atributos Carta 2: %d + %.2f = %.2f\n", populacao2, pib2, populacao2 + pib2); // Imprime a soma dos atributos da carta 2
                           
                            if (populacao + pib > populacao2 + pib2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (populacao + pib < populacao2 + pib2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch    

                            
                        case 4: // O usuário escolheu Opção 1 População e Opção 4 - Densidade Demográfica
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: POPULAÇÃO E DENSIDADE DEMOGRAFICA\n"); 

                            printf("Carta 1 - %s: %d habitantes e %.2f habitantes/km²\n", nome_do_pais, populacao, densidade_demografica); // Imprime o nome da cidade, população e densidade demográfica da carta 1
                            printf("Carta 2 - %s: %d habitantes e %.2f habitantes/km²\n", nome_do_pais2, populacao2, densidade_demografica2); // Imprime o nome da cidade, população e densidade demográfica da carta 2
                            
                            printf("Soma de atributos Carta 1: %d + %.2f = %.2f\n", populacao, densidade_demografica, populacao + densidade_demografica); // Imprime a soma dos atributos da carta 1
                            printf("Soma de atributos Carta 2: %d + %.2f = %.2f\n", populacao2, densidade_demografica2, populacao2 + densidade_demografica2); // Imprime a soma dos atributos da carta 2
                           
                            if (populacao + densidade_demografica > populacao2 + densidade_demografica2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (populacao + densidade_demografica < populacao2 + densidade_demografica2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch    

                        case 5: // OO usuário escolheu Opção 1 População e Opção 5 - PIB per capita
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: POPULAÇÃO E PIB PER CAPITA\n"); 

                            printf("Carta 1 - %s: %d habitantes e %.2f reais\n", nome_do_pais, populacao, pib_per_capita); // Imprime o nome da cidade, população e PIB per capita da carta 1
                            printf("Carta 2 - %s: %d habitantes e %.2f reais\n", nome_do_pais2, populacao2, pib_per_capita2); // Imprime o nome da cidade, população e PIB per capita da carta 2
                            
                            printf("Soma de atributos Carta 1: %d + %.2f = %.2f\n", populacao, pib_per_capita, populacao + pib_per_capita); // Imprime a soma dos atributos da carta 1
                            printf("Soma de atributos Carta 2: %d + %.2f = %.2f\n", populacao2, pib_per_capita2, populacao2 + pib_per_capita2); // Imprime a soma dos atributos da carta 2
                           
                            if (populacao + pib_per_capita > populacao2 + pib_per_capita2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (populacao + pib_per_capita < populacao2 + pib_per_capita2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch    

                        case 6: // O usuário escolheu Opção 1 População e Opção 6 - Número de Pontos Turísticos
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: POPULAÇÃO E NÚMERO DE PONTOS TURÍSTICOS\n"); 

                            printf("Carta 1 - %s: %d habitantes e %d pontos turísticos\n", nome_do_pais, populacao, numero_de_pontos_turisticos); // Imprime o nome da cidade, população e número de pontos turísticos da carta 1
                            printf("Carta 2 - %s: %d habitantes e %d pontos turísticos\n", nome_do_pais2, populacao2, numero_de_pontos_turisticos2); // Imprime o nome da cidade, população e número de pontos turísticos da carta 2
                            
                            printf("Soma de atributos Carta 1: %d + %d = %d\n", populacao, numero_de_pontos_turisticos, populacao + numero_de_pontos_turisticos); // Imprime a soma dos atributos da carta 1
                            printf("Soma de atributos Carta 2: %d + %d = %d\n", populacao2, numero_de_pontos_turisticos2, populacao2 + numero_de_pontos_turisticos2); // Imprime a soma dos atributos da carta 2
                           
                            if (populacao + numero_de_pontos_turisticos > populacao2 + numero_de_pontos_turisticos2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (populacao + numero_de_pontos_turisticos < populacao2 + numero_de_pontos_turisticos2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch    

                        case 7: // Opção 7 - Sair
                            printf("Saindo...\n"); // Imprime "Saindo..."
                            break; // Sai do switch    

                        default: // caso nenhuma das opções anteriores seja escolhida
                            printf("Opção inválida!\n"); // Imprime "Opção inválida!"
                            break; // Sai do switch  
                            }                                           
                            break; // Sai do switch  

 
    case 2: // O usuário escolheu Opção 2 - Área
        printf("\n"); 
        printf("Voce escolheu AREA, escolha o segundo atributo agora:\n"); // Imprime que o jogador escolheu o atributo área
        printf("1. População\n"); // Opção 1
        // printf("2. Área\n"); // Opção 2
        printf("3. PIB\n"); // Opção 3
        printf("4. Densidade Demográfica\n"); // Opção 4
        printf("5. PIB per capita\n"); // Opção 5
        printf("6. Número de Pontos Turísticos\n"); // Opção 6
        printf("7. Sair\n"); // Opção 7
        scanf("%d", &opcao2); // Lê a opção escolhida pelo usuário

                    // RESULTANTE FINAL AGORA DEMONSTRANDO AS DUAS ESCOLHAS
                    switch(opcao2){ // Inicia o switch para verificar a opção escolhida
                        case 1: // O usuário escolheu Opção 2 Área e Opção 1 - População
                            
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: ÁREA E POPULAÇÃO\n"); 

                            printf("Carta 1 - %s: %.2f km² e %d habitantes\n", nome_do_pais, area, populacao); // Imprime o nome da cidade, área e população da carta 1
                            printf("Carta 2 - %s: %.2f km² e %d habitantes\n", nome_do_pais2, area2, populacao2); // Imprime o nome da cidade, área e população da carta 2
                            
                            printf("Soma de atributos Carta 1: %.2f + %d = %.2f\n", area, populacao, area + populacao); // Imprime a soma dos atributos da carta 1
                            printf("Soma de atributos Carta 2: %.2f + %d = %.2f\n", area2, populacao2, area2 + populacao2); // Imprime a soma dos atributos da carta 2
                           
                            if (area + populacao > area2 + populacao2) { // Se a soma dos atributos da carta 1
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            } else if (area + populacao < area2 + populacao2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch


                        case 3: // O usuário escolheu Opção 2 Área e Opção 3 - PIB
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: ÁREA E PIB\n"); 

                            printf("Carta 1 - %s: %.2f km² e %.2f bilhões de reais\n", nome_do_pais, area, pib); // Imprime o nome da cidade, área e PIB da carta 1
                            printf("Carta 2 - %s: %.2f km² e %.2f bilhões de reais\n", nome_do_pais2, area2, pib2); // Imprime o nome da cidade, área e PIB da carta 2
                            
                            printf("Soma de atributos Carta 1: %.2f + %.2f = %.2f\n", area, pib, area + pib); // Imprime a soma dos atributos da carta 1
                            printf("Soma de atributos Carta 2: %.2f + %.2f = %.2f\n", area2, pib2, area2 + pib2); // Imprime a soma dos atributos da carta 2
                           
                            if (area + pib > area2 + pib2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (area + pib < area2 + pib2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch

                            case 4: // O usuário escolheu Opção 2 Área e Opção 4 - Densidade Demográfica
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: ÁREA E DENSIDADE DEMOGRAFICA\n");

                            printf("Carta 1 - %s: %.2f km² e %.2f habitantes/km²\n", nome_do_pais, area, densidade_demografica); // Imprime o nome da cidade, área e densidade demográfica da carta 1
                            printf("Carta 2 - %s: %.2f km² e %.2f habitantes/km²\n", nome_do_pais2, area2, densidade_demografica2); // Imprime o nome da cidade, área e densidade demográfica da carta 2

                            if (area + densidade_demografica > area2 + densidade_demografica2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (area + densidade_demografica < area2 + densidade_demografica2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch

                            case 5: // O usuário escolheu Opção 2 Área e Opção 5 - PIB per capita
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: ÁREA E PIB PER CAPITA\n");

                            printf("Carta 1 - %s: %.2f km² e %.2f reais\n", nome_do_pais, area, pib_per_capita); // Imprime o nome da cidade, área e PIB per capita da carta 1
                            printf("Carta 2 - %s: %.2f km² e %.2f reais\n", nome_do_pais2, area2, pib_per_capita2); // Imprime o nome da cidade, área e PIB per capita da carta 2

                            if (area + pib_per_capita > area2 + pib_per_capita2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (area + pib_per_capita < area2 + pib_per_capita2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch

                            case 6: // O usuário escolheu Opção 2 Área e Opção 6 - Número de Pontos Turísticos
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: ÁREA E NÚMERO DE PONTOS TURÍSTICOS\n");
                            
                            printf("Carta 1 - %s: %.2f km² e %d pontos turísticos\n", nome_do_pais, area, numero_de_pontos_turisticos); // Imprime o nome da cidade, área e número de pontos turísticos da carta 1
                            printf("Carta 2 - %s: %.2f km² e %d pontos turísticos\n", nome_do_pais2, area2, numero_de_pontos_turisticos2); // Imprime o nome da cidade, área e número de pontos turísticos da carta 2

                            if (area + numero_de_pontos_turisticos > area2 + numero_de_pontos_turisticos2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (area + numero_de_pontos_turisticos < area2 + numero_de_pontos_turisticos2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch
                            
                            case 7: // Opção 7 - Sair
                            printf("Saindo...\n"); // Imprime "Saindo..."
                            break; // Sai do switch

                            default: // caso nenhuma das opções anteriores seja escolhida
                            printf("Opção inválida!\n"); // Imprime "Opção inválida!"
                            break; // Sai do switch  
                            }                                           
                            break; // Sai do switch   
                            
    case 3: // O usuário escolheu Opção 3 - PIB
        printf("\n"); 
        printf("Voce escolheu PIB, escolha o segundo atributo agora:\n"); // Imprime que o jogador escolheu o atributo área
        printf("1. População\n"); // Opção 1
        printf("2. Área\n"); // Opção 2
        //printf("3. PIB\n"); // Opção 3
        printf("4. Densidade Demográfica\n"); // Opção 4
        printf("5. PIB per capita\n"); // Opção 5
        printf("6. Número de Pontos Turísticos\n"); // Opção 6
        printf("7. Sair\n"); // Opção 7
        scanf("%d", &opcao2); // Lê a opção escolhida pelo usuário   

                    // RESULTANTE FINAL AGORA DEMONSTRANDO AS DUAS ESCOLHAS
                    switch(opcao2){ // Inicia o switch para verificar a opção escolhida
                        case 1: // O usuário escolheu Opção 3 PIB e Opção 1 - População
                            
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: PIB E POPULAÇÃO\n");

                            printf("Carta 1 - %s: %.2f bilhões de reais e %d habitantes\n", nome_do_pais, pib, populacao); // Imprime o nome da cidade, PIB e população da carta 1
                            printf("Carta 2 - %s: %.2f bilhões de reais e %d habitantes\n", nome_do_pais2, pib2, populacao2); // Imprime o nome da cidade, PIB e população da carta 2

                            if(pib + populacao > pib2 + populacao2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            } else if (pib + populacao < pib2 + populacao2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch


                        case 2: // O usuário escolheu Opção 3 PIB e Opção 2 - Área
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: PIB E ÁREA\n"); 

                            printf("Carta 1 - %s: %.2f bilhões de reais e %.2f km²\n", nome_do_pais, pib, area); // Imprime o nome da cidade, PIB e área da carta 1
                            printf("Carta 2 - %s: %.2f bilhões de reais e %.2f km²\n", nome_do_pais2, pib2, area2); // Imprime o nome da cidade, PIB e área da carta 2
                            
                            if (pib + area > pib2 + area2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (pib + area < pib2 + area2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch
                            
                        case 4: // O usuário escolheu Opção 3 PIB e Opção 4 - Densidade Demográfica
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: PIB E DENSIDADE DEMOGRAFICA\n"); 

                            printf("Carta 1 - %s: %.2f bilhões de reais e %.2f habitantes/km²\n", nome_do_pais, pib, densidade_demografica); // Imprime o nome da cidade, PIB e densidade demográfica da carta 1
                            printf("Carta 2 - %s: %.2f bilhões de reais e %.2f habitantes/km²\n", nome_do_pais2, pib2, densidade_demografica2); // Imprime o nome da cidade, PIB e densidade demográfica da carta 2

                            if (pib + densidade_demografica > pib2 + densidade_demografica2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (pib + densidade_demografica < pib2 + densidade_demografica2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch
                            
                        case 5: // O usuário escolheu Opção 3 PIB e Opção 5 - PIB per capita
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: PIB E PIB PER CAPITA\n"); 

                            printf("Carta 1 - %s: %.2f bilhões de reais e %.2f reais\n", nome_do_pais, pib, pib_per_capita); // Imprime o nome da cidade, PIB e PIB per capita da carta 1
                            printf("Carta 2 - %s: %.2f bilhões de reais e %.2f reais\n", nome_do_pais2, pib2, pib_per_capita2); // Imprime o nome da cidade, PIB e PIB per capita da carta 2

                            if (pib + pib_per_capita > pib2 + pib_per_capita2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (pib + pib_per_capita < pib2 + pib_per_capita2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch
                            
                         case 6: // O usuário escolheu Opção 3 PIB e Opção 6 - Número de Pontos Turísticos
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: PIB E NÚMERO DE PONTOS TURÍSTICOS\n"); 

                            printf("Carta 1 - %s: %.2f bilhões de reais e %d pontos turísticos\n", nome_do_pais, pib, numero_de_pontos_turisticos); // Imprime o nome da cidade, PIB e número de pontos turísticos da carta 1
                            printf("Carta 2 - %s: %.2f bilhões de reais e %d pontos turísticos\n", nome_do_pais2, pib2, numero_de_pontos_turisticos2); // Imprime o nome da cidade, PIB e número de pontos turísticos da carta 2

                            if (pib + numero_de_pontos_turisticos > pib2 + numero_de_pontos_turisticos2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (pib + numero_de_pontos_turisticos < pib2 + numero_de_pontos_turisticos2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch

                            case 7: // Opção 7 - Sair
                            printf("Saindo...\n"); // Imprime "Saindo..."
                            break; // Sai do switch

                            default: // caso nenhuma das opções anteriores seja escolhida
                            printf("Opção inválida!\n"); // Imprime "Opção inválida!"
                            break; // Sai do switch  
                            }                                           
                            break; // Sai do switch  

    case 4: // O usuário escolheu Opção 4 - Densidade Demográfica
        printf("\n"); 
        printf("Voce escolheu DENSIDADE DEMOGRÁFICA , escolha o segundo atributo agora:\n"); // Imprime que o jogador escolheu o atributo área
        printf("1. População\n"); // Opção 1
        printf("2. Área\n"); // Opção 2
        printf("3. PIB\n"); // Opção 3
        //printf("4. Densidade Demográfica\n"); // Opção 4
        printf("5. PIB per capita\n"); // Opção 5
        printf("6. Número de Pontos Turísticos\n"); // Opção 6
        printf("7. Sair\n"); // Opção 7
        scanf("%d", &opcao2); // Lê a opção escolhida pelo usuário   

                    // RESULTANTE FINAL AGORA DEMONSTRANDO AS DUAS ESCOLHAS
                    switch(opcao2){ // Inicia o switch para verificar a opção escolhida
                        case 1: // O usuário escolheu Opção 4 DENSIDADE DEMOGRÁFICA e Opção 1 - População
                            
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: DENSIDADE DEMOGRAFICA E POPULAÇÃO\n");
                            
                            printf("Carta 1 - %s: %.2f habitantes/km² e %d habitantes\n", nome_do_pais, densidade_demografica, populacao); // Imprime o nome da cidade, densidade demográfica e população da carta 1
                            printf("Carta 2 - %s: %.2f habitantes/km² e %d habitantes\n", nome_do_pais2, densidade_demografica2, populacao2); // Imprime o nome da cidade, densidade demográfica e população da carta 2

                            if(densidade_demografica + populacao > densidade_demografica2 + populacao2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            } else if (densidade_demografica + populacao < densidade_demografica2 + populacao2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch

                        case 2: // O usuário escolheu Opção 4 DENSIDADE DEMOGRÁFICA e Opção 2 - Área
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: DENSIDADE DEMOGRAFICA E ÁREA\n"); 

                            printf("Carta 1 - %s: %.2f habitantes/km² e %.2f km²\n", nome_do_pais, densidade_demografica, area); // Imprime o nome da cidade, densidade demográfica e área da carta 1
                            printf("Carta 2 - %s: %.2f habitantes/km² e %.2f km²\n", nome_do_pais2, densidade_demografica2, area2); // Imprime o nome da cidade, densidade demográfica e área da carta 2

                            if (densidade_demografica + area > densidade_demografica2 + area2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (densidade_demografica + area < densidade_demografica2 + area2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch
                            
                        case 3: // O usuário escolheu Opção 4 DENSIDADE DEMOGRÁFICA e Opção 3 - PIB
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: DENSIDADE DEMOGRAFICA E PIB\n"); 

                            printf("Carta 1 - %s: %.2f habitantes/km² e %.2f bilhões de reais\n", nome_do_pais, densidade_demografica, pib); // Imprime o nome da cidade, densidade demográfica e PIB da carta 1
                            printf("Carta 2 - %s: %.2f habitantes/km² e %.2f bilhões de reais\n", nome_do_pais2, densidade_demografica2, pib2); // Imprime o nome da cidade, densidade demográfica e PIB da carta 2

                            if (densidade_demografica + pib > densidade_demografica2 + pib2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (densidade_demografica + pib < densidade_demografica2 + pib2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch
                            
                        case 5: // O usuário escolheu Opção 4 DENSIDADE DEMOGRÁFICA e Opção 5 - PIB per capita
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: DENSIDADE DEMOGRAFICA E PIB PER CAPITA\n"); 

                            printf("Carta 1 - %s: %.2f habitantes/km² e %.2f reais\n", nome_do_pais, densidade_demografica, pib_per_capita); // Imprime o nome da cidade, densidade demográfica e PIB per capita da carta 1
                            printf("Carta 2 - %s: %.2f habitantes/km² e %.2f reais\n", nome_do_pais2, densidade_demografica2, pib_per_capita2); // Imprime o nome da cidade, densidade demográfica e PIB per capita da carta 2

                            if (densidade_demografica + pib_per_capita > densidade_demografica2 + pib_per_capita2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (densidade_demografica + pib_per_capita < densidade_demografica2 + pib_per_capita2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch
                            
                        case 6: // O usuário escolheu Opção 4 DENSIDADE DEMOGRÁFICA e Opção 6 - Número de Pontos Turísticos
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: DENSIDADE DEMOGRAFICA E NÚMERO DE PONTOS TURÍSTICOS\n");    
                            
                            printf("Carta 1 - %s: %.2f habitantes/km² e %d pontos turísticos\n", nome_do_pais, densidade_demografica, numero_de_pontos_turisticos); // Imprime o nome da cidade, densidade demográfica e número de pontos turísticos da carta 1
                            printf("Carta 2 - %s: %.2f habitantes/km² e %d pontos turísticos\n", nome_do_pais2, densidade_demografica2, numero_de_pontos_turisticos2); // Imprime o nome da cidade, densidade demográfica e número de pontos turísticos da carta 2

                            if(densidade_demografica + numero_de_pontos_turisticos > densidade_demografica2 + numero_de_pontos_turisticos2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (densidade_demografica + numero_de_pontos_turisticos < densidade_demografica2 + numero_de_pontos_turisticos2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch

                            case 7: // Opção 7 - Sair
                            printf("Saindo...\n"); // Imprime "Saindo..."
                            break; // Sai do switch

                            default: // caso nenhuma das opções anteriores seja escolhida
                            printf("Opção inválida!\n"); // Imprime "Opção inválida!"
                            break; // Sai do switch  
                            }                                           
                            break; // Sai do switch    

    case 5: // O usuário escolheu Opção 5 - PIB per capita
        printf("\n"); 
        printf("Voce escolheu PIB PER CAPITA , escolha o segundo atributo agora:\n"); // Imprime que o jogador escolheu o atributo área
        printf("1. População\n"); // Opção 1
        printf("2. Área\n"); // Opção 2
        printf("3. PIB\n"); // Opção 3
        printf("4. Densidade Demográfica\n"); // Opção 4
        //printf("5. PIB per capita\n"); // Opção 5
        printf("6. Número de Pontos Turísticos\n"); // Opção 6
        printf("7. Sair\n"); // Opção 7
        scanf("%d", &opcao2); // Lê a opção escolhida pelo usuário   

                    // RESULTANTE FINAL AGORA DEMONSTRANDO AS DUAS ESCOLHAS
                    switch(opcao2){ // Inicia o switch para verificar a opção escolhida
                        case 1: // O usuário escolheu Opção 5 PIB PER CAPITA e Opção 1 - População
                            
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: PIB PER CAPITA E POPULAÇÃO\n");
                            
                            printf("Carta 1 - %s: %.2f reais e %d habitantes\n", nome_do_pais, pib_per_capita, populacao); // Imprime o nome da cidade, PIB per capita e população da carta 1
                            printf("Carta 2 - %s: %.2f reais e %d habitantes\n", nome_do_pais2, pib_per_capita2, populacao2); // Imprime o nome da cidade, PIB per capita e população da carta 2

                            if(pib_per_capita + populacao > pib_per_capita2 + populacao2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            } else if (pib_per_capita + populacao < pib_per_capita2 + populacao2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch

                        case 2: // O usuário escolheu Opção 5 PIB PER CAPITA e Opção 2 - Área
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: PIB PER CAPITA E ÁREA\n"); 

                            printf("Carta 1 - %s: %.2f reais e %.2f km²\n", nome_do_pais, pib_per_capita, area); // Imprime o nome da cidade, PIB per capita e área da carta 1
                            printf("Carta 2 - %s: %.2f reais e %.2f km²\n", nome_do_pais2, pib_per_capita2, area2); // Imprime o nome da cidade, PIB per capita e área da carta 2

                            if (pib_per_capita + area > pib_per_capita2 + area2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (pib_per_capita + area < pib_per_capita2 + area2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch
                            
                        case 3: // O usuário escolheu Opção 5 PIB PER CAPITA e Opção 3 - PIB
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: PIB PER CAPITA E PIB\n"); 

                            printf("Carta 1 - %s: %.2f reais e %.2f bilhões de reais\n", nome_do_pais, pib_per_capita, pib); // Imprime o nome da cidade, PIB per capita e PIB da carta 1
                            printf("Carta 2 - %s: %.2f reais e %.2f bilhões de reais\n", nome_do_pais2, pib_per_capita2, pib2); // Imprime o nome da cidade, PIB per capita e PIB da carta 2

                            if (pib_per_capita + pib > pib_per_capita2 + pib2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (pib_per_capita + pib < pib_per_capita2 + pib2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch
                            
                        case 4: // O usuário escolheu Opção 5 PIB PER CAPITA e Opção 4 - Densidade Demográfica
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: PIB PER CAPITA E DENSIDADE DEMOGRAFICA\n"); 

                            printf("Carta 1 - %s: %.2f reais e %.2f habitantes/km²\n", nome_do_pais, pib_per_capita, densidade_demografica); // Imprime o nome da cidade, PIB per capita e densidade demográfica da carta 1
                            printf("Carta 2 - %s: %.2f reais e %.2f habitantes/km²\n", nome_do_pais2, pib_per_capita2, densidade_demografica2); // Imprime o nome da cidade, PIB per capita e densidade demográfica da carta 2

                            if (pib_per_capita + densidade_demografica > pib_per_capita2 + densidade_demografica2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (pib_per_capita + densidade_demografica < pib_per_capita2 + densidade_demografica2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch

                        case 6: // O usuário escolheu Opção 5 PIB PER CAPITA e Opção 6 - Número de Pontos Turísticos
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: PIB PER CAPITA E NÚMERO DE PONTOS TURÍSTICOS\n");
                            
                            printf("Carta 1 - %s: %.2f reais e %d pontos turísticos\n", nome_do_pais, pib_per_capita, numero_de_pontos_turisticos); // Imprime o nome da cidade, PIB per capita e número de pontos turísticos da carta 1
                            printf("Carta 2 - %s: %.2f reais e %d pontos turísticos\n", nome_do_pais2, pib_per_capita2, numero_de_pontos_turisticos2); // Imprime o nome da cidade, PIB per capita e número de pontos turísticos da carta 2

                            if(pib_per_capita + numero_de_pontos_turisticos > pib_per_capita2 + numero_de_pontos_turisticos2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (pib_per_capita + numero_de_pontos_turisticos < pib_per_capita2 + numero_de_pontos_turisticos2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch

                            case 7: // Opção 7 - Sair
                            printf("Saindo...\n"); // Imprime "Saindo..."
                            break; // Sai do switch

                            default: // caso nenhuma das opções anteriores seja escolhida
                            printf("Opção inválida!\n"); // Imprime "Opção inválida!"
                            break; // Sai do switch  
                            }                                           
                            break; // Sai do switch   

    case 6: // O usuário escolheu Opção 6 - Número de Pontos Turísticos 
        printf("\n"); 
        printf("Voce escolheu PIB PER CAPITA , escolha o segundo atributo agora:\n"); // Imprime que o jogador escolheu o atributo área
        printf("1. População\n"); // Opção 1
        printf("2. Área\n"); // Opção 2
        printf("3. PIB\n"); // Opção 3
        printf("4. Densidade Demográfica\n"); // Opção 4
        printf("5. PIB per capita\n"); // Opção 5
       // printf("6. Número de Pontos Turísticos\n"); // Opção 6
        printf("7. Sair\n"); // Opção 7
        scanf("%d", &opcao2); // Lê a opção escolhida pelo usuário   

                    // RESULTANTE FINAL AGORA DEMONSTRANDO AS DUAS ESCOLHAS
                    switch(opcao2){ // Inicia o switch para verificar a opção escolhida
                        case 1: // O usuário escolheu Opção 6 Número de Pontos Turístico e Opção 1 - População
                            
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: NÚMERO DE PONTOS TURÍSTICOS E POPULAÇÃO\n");

                            printf("Carta 1 - %s: %d pontos turísticos e %d habitantes\n", nome_do_pais, numero_de_pontos_turisticos, populacao); // Imprime o nome da cidade, número de pontos turísticos e população da carta 1
                            printf("Carta 2 - %s: %d pontos turísticos e %d habitantes\n", nome_do_pais2, numero_de_pontos_turisticos2, populacao2); // Imprime o nome da cidade, número de pontos turísticos e população da carta 2

                            if(numero_de_pontos_turisticos + populacao > numero_de_pontos_turisticos2 + populacao2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            } else if (numero_de_pontos_turisticos + populacao < numero_de_pontos_turisticos2 + populacao2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch

                        case 2: // O usuário escolheu Opção 6 Número de Pontos Turístico e Opção 2 - Área
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: NÚMERO DE PONTOS TURÍSTICOS E ÁREA\n"); 

                            printf("Carta 1 - %s: %d pontos turísticos e %.2f km²\n", nome_do_pais, numero_de_pontos_turisticos, area); // Imprime o nome da cidade, número de pontos turísticos e área da carta 1
                            printf("Carta 2 - %s: %d pontos turísticos e %.2f km²\n", nome_do_pais2, numero_de_pontos_turisticos2, area2); // Imprime o nome da cidade, número de pontos turísticos e área da carta 2

                            if (numero_de_pontos_turisticos + area > numero_de_pontos_turisticos2 + area2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (numero_de_pontos_turisticos + area < numero_de_pontos_turisticos2 + area2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch 
                            
                        case 3: // O usuário escolheu Opção 6 Número de Pontos Turístico e Opção 3 - PIB
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: NÚMERO DE PONTOS TURÍSTICOS E PIB\n"); 
// A sorte acompanha os corajosos!
                            printf("Carta 1 - %s: %d pontos turísticos e %.2f bilhões de reais\n", nome_do_pais, numero_de_pontos_turisticos, pib); // Imprime o nome da cidade, número de pontos turísticos e PIB da carta 1
                            printf("Carta 2 - %s: %d pontos turísticos e %.2f bilhões de reais\n", nome_do_pais2, numero_de_pontos_turisticos2, pib2); // Imprime o nome da cidade, número de pontos turísticos e PIB da carta 2

                            if (numero_de_pontos_turisticos + pib > numero_de_pontos_turisticos2 + pib2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (numero_de_pontos_turisticos + pib < numero_de_pontos_turisticos2 + pib2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch
                            
                        case 4: // O usuário escolheu Opção 6 Número de Pontos Turístico e Opção 4 - Densidade Demográfica
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: NÚMERO DE PONTOS TURÍSTICOS E DENSIDADE DEMOGRAFICA\n"); 

                            printf("Carta 1 - %s: %d pontos turísticos e %.2f habitantes/km²\n", nome_do_pais, numero_de_pontos_turisticos, densidade_demografica); // Imprime o nome da cidade, número de pontos turísticos e densidade demográfica da carta 1
                            printf("Carta 2 - %s: %d pontos turísticos e %.2f habitantes/km²\n", nome_do_pais2, numero_de_pontos_turisticos2, densidade_demografica2); // Imprime o nome da cidade, número de pontos turísticos e densidade demográfica da carta 2

                            if (numero_de_pontos_turisticos + densidade_demografica > numero_de_pontos_turisticos2 + densidade_demografica2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (numero_de_pontos_turisticos + densidade_demografica < numero_de_pontos_turisticos2 + densidade_demografica2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch
                            
                        case 5: // O usuário escolheu Opção 6 Número de Pontos Turístico e Opção 5 - PIB per capita
                            printf("\n");
                            printf(">>> %s <<<VS>>> %s <<<\n", nome_do_pais, nome_do_pais2); 
                            printf("Atributos: NÚMERO DE PONTOS TURÍSTICOS E PIB PER CAPITA\n");
                            
                            printf("Carta 1 - %s: %d pontos turísticos e %.2f reais\n", nome_do_pais, numero_de_pontos_turisticos, pib_per_capita); // Imprime o nome da cidade, número de pontos turísticos e PIB per capita da carta 1
                            printf("Carta 2 - %s: %d pontos turísticos e %.2f reais\n", nome_do_pais2, numero_de_pontos_turisticos2, pib_per_capita2); // Imprime o nome da cidade, número de pontos turísticos e PIB per capita da carta 2

                            if(numero_de_pontos_turisticos + pib_per_capita > numero_de_pontos_turisticos2 + pib_per_capita2) { // Se a soma dos atributos da carta 1 for maior que a da carta 2, imprime que a carta 1 é maior
                                printf("Resultado: Carta 1  - >>> %s venceu! <<<\n", nome_do_pais); // Imprime que a carta 1 venceu
                            }
                            else if (numero_de_pontos_turisticos + pib_per_capita < numero_de_pontos_turisticos2 + pib_per_capita2) { // Se a soma dos atributos da carta 2 for maior que a da carta 1, imprime que a carta 2 é maior
                                printf("Resultado: Carta 2  - >>> %s venceu! <<<\n", nome_do_pais2); // Imprime que a carta 2 venceu
                            }
                            else { // Se as somas forem iguais, imprime que as cartas são iguais
                                printf("Resultado: >>> Empate! <<<\n"); // Imprime "Empate!"
                            }
                            break; // Sai do switch

                            case 7: // Opção 7 - Sair
                            printf("Saindo...\n"); // Imprime "Saindo..."
                            break; // Sai do switch

                            default: // caso nenhuma das opções anteriores seja escolhida
                            printf("Opção inválida!\n"); // Imprime "Opção inválida!"
                            break; // Sai do switch  
                            }                                           
                            break; // Sai do switch                         
                                               
    case 7: // O usuário escolheu Opção 7 - Sair 
        printf("Saindo...\n"); // Imprime "Saindo..."
        break; // Sai do switch
              
              
                  
} // Fim do switch externo
return 0;
} // Fim do programa