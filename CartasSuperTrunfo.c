#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

  char estado;
  char codigo[], nomedacidade[];
  int populaçao, pontosturisticos;
  float areakm, PIB;

  printf ("Digite o Estado: \n");
  scanf ("%c", &estado);

  printf ("Digite o Código: \n");
  scanf ("%s", &codigo);

  printf ("Digite o Nome da Cidade: \n");
  scanf ("%s", &nomedacidade);

  printf ("Digite a População: \n");
  scanf ("%d", &populaçao);

  printf("Digite a Área: \n");
  scanf ("%f", &areakm);

  printf ("Digite o PIB: \n");
  scanf ("%1f", &PIB);
  
  printf ("Digite o Número de Pontos Turísticos: \n");
  scanf ("%d", &pontosturisticos);

  printf (" Carta 1: \n");
  Printf ("Estado: %c \n" estado);
  printf ("Código: %s \n" codigo);
  printf ("Nome da Cidade: %s \n" nomedacidade);
  printf ("População: %d \n" populaçao);
  printf ("Área: %f \n" areakm);
  printf ("PIB: %1f \n" PIB);
  printf ("Número de Pontos Turísticos: %d \n" pontosturisticos);

  


  
return 0;
} 
