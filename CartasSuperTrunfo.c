#include <stdio.h>

int main(){
// Área para definição de Variaveis.

    char estado = 'A', estadoC2;
    char codigoC1[20], codigoC2[20], nomedacidadeC1[20], nomedacidadeC2[20];
    int populaçaoC1, populaçaoC2, ptturisticoC1, escolhaComparar, ptturisticoC2;
    float areakmC1, areakmC2, pibC1, pibC2, densidadeplC1, densidadeplC2;
    float pibpcpC1, pibpcpC2, superpoderC1, superpoderC2;

// Área para entradad de dados: 
    printf("Informe os dados da Carta 1: \n");

        printf("Digite o Estado: \n");
        scanf("%C", &estado);
        printf("Digite o Código: \n");
        scanf("%s", &codigoC1);
        printf("Digite o Nome da Cidade: \n");
        scanf("%s", &nomedacidadeC1);
        printf("Digite a População: \n");
        scanf("%d", &populaçaoC1);
        printf("Digite a Área: \n");
        scanf("%f", &areakmC1);
        printf("Digite o PIB: \n");
        scanf("%f", &pibC1);
        printf("Digite o Número de Pontos Turísticos: \n");
        scanf("%d", &ptturisticoC1);
        
// calculos de dados
    densidadeplC1 = populaçaoC1 / areakmC1;
    pibpcpC1 = pibC1 / populaçaoC1;
    superpoderC1 = populaçaoC1 + areakmC1 + pibC1 + ptturisticoC1;

printf("\n");

// entrada de dados
        printf("Informe os dados da Carta 2: \n");

            printf("Digite o Estado: \n");
            scanf("%s", &estadoC2);
            printf("Digite o Código: \n");
            scanf("%s", &codigoC2);
            printf("Digite o Nome da Cidade: \n");
            scanf("%s", &nomedacidadeC2);
            printf("Digite a População: \n");
            scanf("%d", &populaçaoC2);
            printf("Digite a Área: \n");
            scanf("%f", &areakmC2);
            printf("Digite o PIB: \n");
            scanf("%f", &pibC2);
            printf("Digite o Número de Pontos Turísticos: \n");
            scanf("%d", &ptturisticoC2);

// calculos de dados
    densidadeplC2 = populaçaoC2 / areakmC2;
    pibpcpC2 = pibC2 / populaçaoC2;
    superpoderC2 = populaçaoC2 + areakmC2 + pibC2 + ptturisticoC2;

   printf("\n"); 

// Área de exibição de dados

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoC1);
    printf("Nome da Cidade: %S\n", nomedacidadeC1);
    printf("População: %d\n", populaçaoC1);
    printf("Área: %.2f km²\n", areakmC1);
    printf("PIB: %.2f\n", pibC1);
    printf("Número de Pontos Turísticos: %d\n", ptturisticoC1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeplC1);
    printf("PIB per capita: %.2f\n",pibpcpC1);
    printf("Super Poder: %.2f\n", superpoderC1);

    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c\n", estadoC2);
    printf("Código: %s\n", codigoC2);
    printf("Nome da Cidade: %S\n", nomedacidadeC2);
    printf("População: %d\n", populaçaoC2);
    printf("Área: %.2f km²\n", areakmC2);
    printf("PIB: %.2f\n", pibC2);
    printf("Número de Pontos Turísticos: %d\n", ptturisticoC2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeplC2);
    printf("PIB per capita: %.2f\n",pibpcpC2);
    printf("Super Poder: %.2f\n", superpoderC2);

    printf("\n");

// Área para comparações 

    printf("Comparações de Cartas:\n");

    printf("\n");

        if(populaçaoC1 > populaçaoC2){
        printf("População: Carta 1 Vence.\n");
        } else {
          printf("População: Carta 2 vence. \n");
        }
        if(areakmC1 > areakmC2){
        printf("Área: Carta 1 Vence.\n");
        } else {
          printf("Área: Carta 2 vence. \n");
        }
         if(pibC1 > pibC2){
        printf("PIB: Carta 1 Vence.\n");
        } else {
          printf("PIB: Carta 2 vence. \n");
        }
        if(ptturisticoC1 > ptturisticoC2){
        printf("Pontos Turísticos: Carta 1 Vence.\n");
        } else {
          printf("Pontos Turísticos: Carta 2 vence. \n");
        }
         if(densidadeplC1 > densidadeplC2){
        printf("Densidade Populacional: Carta 1 Vence.\n");
        } else {
          printf("Densidade Populacional: Carta 2 vence. \n");
        }
         if(pibpcpC1 > pibpcpC2){
        printf("PIB per capita: Carta 1 Vence.\n");
        } else {
          printf("PIB per capita: Carta 2 vence. \n");
        }
        if(superpoderC1 > superpoderC2){
        printf("Super Poder: Carta 1 Vence.\n");
        } else {
          printf("Super Poder: Carta 2 vence. \n");
        }
        printf("\n");

        // menu 
        printf("Escolha um atributo:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per capita\n");
        printf("7. Super Poder\n");
        printf("Escolha uma opção:");
        scanf("%d", &escolhaComparar);
        printf("\n");
        
        switch (escolhaComparar)
        {
        case 1:
              printf("Comparando População: \n");
              printf("Carta 1: %s - Área: %d\n", nomedacidadeC1, populaçaoC1);
              printf("Carta 2: %s - Área: %d\n", nomedacidadeC2, populaçaoC2);
                    if(populaçaoC1 > populaçaoC2)
                    {
                      printf("Resultado Final: Carta 1 Vence.\n");
                    } else if (populaçaoC1 == populaçaoC2)
                    {
                     printf("Resultador Final: Empate. \n");
                    } else 
                    {
                     printf("Resultado Final: Carta 2 Vence.\n");
                    }
                    break;
        case 2:
              printf("Comparando Área: \n");
              printf("Carta 1: %s - Área: %.2f\n", nomedacidadeC1, areakmC1);
              printf("Carta 2: %s - Área: %.2f\n", nomedacidadeC2, areakmC2);
                    if(areakmC1 > areakmC2)
                    {
                      printf("Resultado Final: Carta 1 Vence.\n");
                    } else if (areakmC1 == areakmC2)
                    {
                     printf("Resultador Final: Empate. \n");
                    } else 
                    {
                     printf("Resultado Final: Carta 2 Vence.\n");
                    }
                    break;
        case 3:
              printf("Comparando PIB: \n");
              printf("Carta 1: %s - Área: %.2f\n", nomedacidadeC1, pibC1);
              printf("Carta 2: %s - Área: %.2f\n", nomedacidadeC2, pibC2);
                    if(pibC1 > pibC2)
                    {
                      printf("Resultado Final: Carta 1 Vence.\n");
                    } else if (pibC1 == pibC2)
                    {
                     printf("Resultador Final: Empate. \n");
                    } else 
                    {
                     printf("Resultado Final: Carta 2 Vence.\n");
                    }
                    break;
        case 4:
              printf("Comparando Pontos Turísticos: \n");
              printf("Carta 1: %s - Área: %d\n", nomedacidadeC1, ptturisticoC1);
              printf("Carta 2: %s - Área: %d\n", nomedacidadeC2, ptturisticoC2);
                    if(ptturisticoC1 > ptturisticoC2)
                    {
                      printf("Resultado Final: Carta 1 Vence.\n");
                    } else if (ptturisticoC1 == ptturisticoC2)
                    {
                     printf("Resultador Final: Empate. \n");
                    } else 
                    {
                     printf("Resultado Final: Carta 2 Vence.\n");
                    }
                    break;
        case 5:
              printf("Comparando Densidade Populacional: \n");
              printf("Carta 1: %s - Área: %.2f\n", nomedacidadeC1, densidadeplC1);
              printf("Carta 2: %s - Área: %.2f\n", nomedacidadeC2, densidadeplC2);
                    if(densidadeplC1 > densidadeplC2)
                    {
                      printf("Resultado Final: Carta 1 Vence.\n");
                    } else if (ptturisticoC1 == ptturisticoC2)
                    {
                     printf("Resultador Final: Empate. \n");
                    } else 
                    {
                     printf("Resultado Final: Carta 2 Vence.\n");
                    }
                    break;
        case 6:
              printf("Comparando PIB per capita: \n");
              printf("Carta 1: %s - Área: %.2f\n", nomedacidadeC1, pibpcpC1);
              printf("Carta 2: %s - Área: %.2f\n", nomedacidadeC2, pibpcpC2);
                    if(pibpcpC1 > pibpcpC2)
                    {
                      printf("Resultado Final: Carta 1 Vence.\n");
                    } else if (pibpcpC1 == pibpcpC2)
                    {
                     printf("Resultador Final: Empate. \n");
                    } else 
                    {
                     printf("Resultado Final: Carta 2 Vence.\n");
                    }
                    break;
        case 7:
              printf("Comparando Super Poder: \n");
              printf("Carta 1: %s - Área: %.2f\n", nomedacidadeC1, superpoderC1);
              printf("Carta 2: %s - Área: %.2f\n", nomedacidadeC2, superpoderC2);
                    if(superpoderC1 > superpoderC2)
                    {
                      printf("Resultado Final: Carta 1 Vence.\n");
                    } else if (superpoderC1 == superpoderC2)
                    {
                     printf("Resultador Final: Empate. \n");
                    } else 
                    {
                     printf("Resultado Final: Carta 2 Vence.\n");
                    }
                    break;
        default:
              printf("Opção Invalida.\n");
          break;
        }    
    

    return 0;
    
}