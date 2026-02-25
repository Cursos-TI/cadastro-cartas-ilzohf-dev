#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){

    // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado;
    char codigo[20];
    char nomedacidade[20];
    int população;
    int pontosturisticos;
    float areakm;
    float pib;
    float densidadepopulacional;
    float pibpercapita;

    // Área para entrada de dados

    printf ("Digite o estado: \n");
    scanf ("%c", &estado);

    printf ("Digite o Código: \n");
    scanf ("%s", &codigo);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nomedacidade);

    printf ("Digite a população: \n");
    scanf ("%d", &população);

    printf ("Digite a Área: \n");
    scanf ("%f", &areakm);

    printf ("Dikgite o PIB: \n");
    scanf ("%f", &pib);

    printf ("Digite o número de pontos turísticos: \n");
    scanf ("%d", &pontosturisticos);

    // Área para calculos de dados

    densidadepopulacional = população / areakm;

    pibpercapita = pib / população;
    
    // Área para exibição dos dados da cidade
    printf ("\n");
    printf ("Carta 1: \n");
    printf ("Estado: %c \n", estado);
    printf ("Código: %s \n", codigo);
    printf ("Nome da Cidade: %s \n", nomedacidade);
    printf ("População: %d \n", população);
    printf ("Área: %f Km² \n",areakm);
    printf ("PIB: %f \n", pib);
    printf ("Número de Pontos Turísticos: %d \n", pontosturisticos);
    printf ("Densidade Populacional: %.2f hab/Km² \n", densidadepopulacional);
    printf ("PIB per Capita: %.2f \n", pibpercapita);
               


    return 0;
    
}