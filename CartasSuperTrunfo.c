#include <stdio.h>

int main() {
    printf("seja bem-vindo ao jogo super triunfo, siga as instruções para jogar\n");
           //variaveis carta 1
      char Estado1;
       char Codigo_da_carta1[4];
        char Nome_da_Cidade1[50];
        char Populacao1[50];
        float Area1;
        float PIB1;
        char Numero_de_pontos_turisticos1[50];

          //leitura dos dados da carta 1

           printf("-----Cadastro da Carta 1-----\n"); //impressao do titulo
             printf("Digite o Estado 'uma letra de A até H': "); 
             scanf(" %c", &Estado1);

                printf("Digite o Código da Carta (ex: A01): ");
                scanf(" %s", &Codigo_da_carta1);

                   printf("Digite o Nome da Cidade: ");
                    scanf(" %s", &Nome_da_Cidade1);

                        printf("Digite a População: ");
                         scanf(" %s", &Populacao1);

                            printf("Digite a Área em km²: ");
                             scanf(" %f", &Area1);

                              printf("Digite o PIB: ");
                              scanf(" %f", &PIB1);

                                printf("Digite o Número de Pontos Turísticos: ");
                                 scanf(" %s", &Numero_de_pontos_turisticos1);

        //variaveis carta 2
        char Estado2;
        char Codigo_da_carta2[4];
        char Nome_da_Cidade2[50];
        char Populacao2[50];
        float Area2;
        float PIB2;
        char Numero_de_pontos_turisticos2[50];

        //leitura dos dados da carta 2
        printf("-----Cadastro da Carta 2-----\n"); //impressao do titulo

             printf("Digite o Estado 'uma letra de A até H': ");
              scanf(" %c", &Estado2);
                    
                     printf("Digite o Código da Carta (ex: B02): ");
                         scanf(" %s", &Codigo_da_carta2);

                   printf("Digite o Nome da Cidade: ");
                    scanf(" %s", &Nome_da_Cidade2);
                        
                     
 
                        printf("Digite a População: ");
                       scanf(" %s", &Populacao2);

                         printf("Digite a Área em km² : ");
                         scanf(" %f", &Area2);

                             printf("Digite o PIB: ");
                            scanf(" %f", &PIB2);

                               printf("Digite o Número de Pontos Turísticos: ");
                               scanf(" %s", &Numero_de_pontos_turisticos2);
                         
        //exibição dos dados da carta 1
        printf("\n -----informações da carta 1 e 2 ----- \n");
        printf("\n-----Dados da Carta 1-----\n");
        printf("Estado: %c\n", Estado1);
        printf("Código da Carta: %s\n", Codigo_da_carta1);
        printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
        printf("População: %s\n", Populacao1);
        printf("Área: %.2f\n", Area1);
        printf("PIB: %.2f\n", PIB1);
        printf("Número de Pontos Turísticos: %s\n", Numero_de_pontos_turisticos1);

            //exibição dos dados da carta 2
             printf("\n-----Dados da Carta 2-----\n");
             printf("Estado: %c\n", Estado2);
             printf("Código da Carta: %s\n", Codigo_da_carta2);
             printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
             printf("População: %s\n", Populacao2);
             printf("Área: %.2f\n", Area2);
             printf("PIB: %.2f\n", PIB2);
             printf("Número de Pontos Turísticos: %s\n", Numero_de_pontos_turisticos2);

}