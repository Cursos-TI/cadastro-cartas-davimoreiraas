#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 printf("Desafio Xadrez!\n");
 printf("Novo commmit\n");

// Área para definição das variáveis para armazenar as propriedades das cidades

// Variáveis para Carta 1

 char estado1;
 char codigo1[4];
 char nomeCidade1[50];
 int populacao1;
 float area1, pib1;
 int pontosTuristicos1;

// Variáveis para Carta 2

 char estado2;
 char codigo2[4];
 char nomeCidade2[50];
 int populacao2;
 float area2, pib2;
 int pontosTuristicos2;

// Área para entrada de dados

//Entrada de dados Carta 1 

 printf("Carta 1 \n");

 printf("Estado (A-H):\n");
 scanf("%c", &estado1);

 printf("Código da Carta:\n");
 scanf("%s", &codigo1);

 printf("Nome da Cidade:\n");
 scanf("%s", &nomeCidade1);

 printf("População:\n");
 sacnf("%d", &populacao1);

 prinf("Área:\n");
 scanf("%f", area1);

 prinft("PIB:\n");
 scanf("%f", pib1);

 prinft("Números de Pontos Turísticos:\n");
 scanf("%d", pontosTuristicos1);

// Área para exibição dos dados da cidade

 prinft("Carta 1:\n");
 printf("Estado: %c\n", estado1);

return 0;
} 