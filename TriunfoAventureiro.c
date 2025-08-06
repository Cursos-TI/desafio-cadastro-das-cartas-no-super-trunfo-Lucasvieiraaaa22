#include <stdio.h>

int main() {
    printf("seja bem-vindo ao jogo super triunfo, siga as instruções para jogar\n");
           //variaveis carta 1
      char Estado1;
       char Codigo_da_carta1[10];
        char Nome_da_Cidade1[50];
        int Populacao1;
        float Area1;
        float PIB1;
        int Numero_de_pontos_turisticos1;
        float Densidade1, PIB_per_capita1;// o ideal seria usar o double para ter mais precisão, mas como o enunciado pede float

          //leitura dos dados da carta 1

           printf("-----Cadastro da Carta 1-----\n"); //impressao do titulo
             
               printf("Digite o Estado 'uma letra de A até H': "); 
                  scanf(" %c", &Estado1);

                printf("Digite o Código da Carta (ex: A01): ");
                scanf(" %s", Codigo_da_carta1);

                   printf("Digite o Nome da Cidade: ");
                    scanf(" %[^\n]", Nome_da_Cidade1); // aceita espaços

                        printf("Digite a População: ");
                         scanf(" %d", &Populacao1);

                            printf("Digite a Área em km²: ");
                             scanf(" %f", &Area1);

                              printf("Digite o PIB em bilhões: ");
                              scanf(" %f", &PIB1);

                                printf("Digite o Número de Pontos Turísticos: ");
                                 scanf(" %d", &Numero_de_pontos_turisticos1);

                                                 //calculo Carta 1
                                                                          
                                                 Densidade1 = (float) Populacao1 / Area1; // cálculo da densidade
                                         PIB_per_capita1 = PIB1 / (float)Populacao1 * 1000000000; // converte o PIB em reais



        //variaveis carta 2
        char Estado2;
        char Codigo_da_carta2[10];
        char Nome_da_Cidade2[50];
        int Populacao2;
        float Area2;
        float PIB2;
        int Numero_de_pontos_turisticos2; 
        float Densidade2, PIB_per_capita2; // o ideal seria usar o double para ter mais precisão, mas como o enunciado pede float

      
        //leitura dos dados da carta 2
        printf("-----Cadastro da Carta 2-----\n"); //impressao do titulo

             printf("Digite o Estado 'uma letra de A até H': ");
              scanf(" %c", &Estado2);
                    
                     printf("Digite o Código da Carta (ex: B02): ");
                         scanf(" %s", Codigo_da_carta2);

                   printf("Digite o Nome da Cidade: ");
                     scanf(" %[^\n]", Nome_da_Cidade2); // aceita espaços

                       printf("Digite a População: ");
                       scanf(" %d", &Populacao2);

                         printf("Digite a Área em km² : ");
                         scanf(" %f", &Area2);

                             printf("Digite o PIB em bilhões: ");
                            scanf(" %f", &PIB2);

                               printf("Digite o Número de Pontos Turísticos: ");
                               scanf(" %d", &Numero_de_pontos_turisticos2);

                                  //calculo Carta 2                   
                                 Densidade2 =(float)Populacao2 / Area2;
                                  PIB_per_capita2 = PIB2 / (float) Populacao2 * 1000000000;

        //exibição dos dados da carta 1
        printf("\n -----informações da carta 1 e 2 ----- \n");

        printf("\n-----Dados da Carta 1-----\n");
        printf("Estado: %c\n", Estado1);
        printf("Código da Carta: %s\n", Codigo_da_carta1);
        printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
        printf("População: %d\n", Populacao1);
        printf("Área: %.2f\n", Area1);
        printf("PIB: %.2f\n", PIB1);
        printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_turisticos1);
        printf("Densidade da primeira carta: %.2f habitantes/km²\n", Densidade1);
        printf("PIB per capita da primeira carta: %.2f reais\n", PIB_per_capita1);



        //exibição dos dados da carta 
        printf("\n-----Dados da Carta 2-----\n");
        printf("Estado: %c\n", Estado2);
        printf("Código da Carta: %s\n", Codigo_da_carta2);
        printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
        printf("População: %d\n", Populacao2);
        printf("Área: %.2f\n", Area2);
        printf("PIB: %.2f\n", PIB2);
        printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_turisticos2);
        printf("Densidade da segunda carta: %.2f habitantes/km²\n", Densidade2);
        printf("PIB per capita da segunda carta: %.2f reais\n", PIB_per_capita2);

        return 0; // finaliza o programa

}