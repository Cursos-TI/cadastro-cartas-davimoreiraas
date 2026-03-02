#include <stdio.h>
 // Desafio Super Trunfo - Países
 // Tema 1 - Cadastro das cartas
 // Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 // Área para definição das variáveis para armazenar as propriedades das cidades

 // Variáveis para Carta 1

 char estado1;
 char codigo1[4];
 char nomeCidade1[50];
 int populacao1;
 int pontosTuristicos1;
 float area1, pib1;
 float densidade1;
 float pibCapital1;

 // Variáveis para Carta 2

 char estado2;
 char codigo2[4];
 char nomeCidade2[50];
 int populacao2;
 int pontosTuristicos2;
 float area2, pib2;
 float densidade2;
 float pibCapital2;

 // Área para entrada de dados

 //Entrada de dados Carta 1 

 printf("\n Carta 1 \n");

 printf("Estado (A-H): \n");
 scanf("%s", &estado1);

 printf("Código da Carta (ex:A01): \n");
 scanf("%s", &codigo1);

 printf("Nome da Cidade: \n");
 scanf("%s", &nomeCidade1);

 printf("População: \n");
 scanf("%d", &populacao1);

 printf("Área: \n");
 scanf("%f", &area1);

 printf("PIB: \n");
 scanf("%f", &pib1);

 printf("Números de Pontos Turísticos: \n");
 scanf("%d", &pontosTuristicos1);

 densidade1 = populacao1 / area1;
 pibCapital1 = pib1 / populacao1;

 //Entrada de dados Carta 2

 printf("\n Carta 2 \n");

 printf("Estado (A-H): \n");
 scanf("%s", &estado2);

 printf("Código da Carta (ex:B01): \n");
 scanf("%s", &codigo2);

 printf("Nome da Cidade: \n");
 scanf("%s", &nomeCidade2);

 printf("População: \n");
 scanf("%d", &populacao2);

 printf("Área: \n");
 scanf("%f", &area2);

 printf("Pib: \n");
 scanf("%f", &pib2);

 printf("Números de Pontos Turísticos: \n");
 scanf("%d", &pontosTuristicos2);

 densidade2 = populacao2 / area2;
 pibCapital2 = pib2 / populacao2;

 // Área para exibição dos dados da cidade

 //Carta 1

 printf("\nCarta 1: \n");
 printf("Estado: %c\n Código: %s\n Nome: %s\n", estado1, codigo1, nomeCidade1);
 printf("População: %d\n Área: %.2f km²\n PIB: %.2f bilhões\n PT: %d\n", populacao1, area1, pib1, pontosTuristicos1);
 printf("Densidade populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n", densidade1, pibCapital2);

 //Carta 2

 printf("\nCarta 2: \n");
 printf("Estado: %c\n Código: %s\n Nome: %s\n", estado2, codigo2, nomeCidade2);
 printf("População: %d\n Área: %.2f km²\n PIB: %.2f bilhões\n PT: %d\n", populacao2, area2, pib2, pontosTuristicos2);
 printf("Densidade populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n", densidade2, pibCapital2);

 return 0;
} 