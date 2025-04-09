#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
        int tabuleiro[10][10]={                         //declaração de matriz 10x10, inicialmente todos os valores da matriz são 0
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        char letrasbatalha[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'              //declaração  de cabecalho de letras para mapeamento e orientação usuario
        };
        char *colunabatalha[10] = { " 1", " 2", " 3", " 4", " 5", " 6", " 7", " 8", " 9", "10"   //declaração de cabecalho de numeros para mapeamento e orientação do usuario
        };
        int index=0;

        int navio[3] = {3, 3, 3};       //declaração do vetor do primeiro navio
        int navio2[3] = {3, 3, 3};      //declaração do vetor do segundo navio
        int navio3[3] = {3, 3, 3};      //declaração do vetor do terceiro navio
        int navio4[4] = {3, 3, 3};      //declaração do vetor do quarto navio

        index=2;

        for (int k=0;  k<3; k++){
            if (k>=0 && k<=9){
             tabuleiro[index][k]=navio[k];
            }else{
                printf("essa posição esta fora do tabuleiro\n");}
        }

        index=7;

        for(int l=0; l<3; l++){
            if (l>=0 && l<=9){
                tabuleiro[l][index]=navio2[l];
            }else{
                printf("essa posição esta fora do tabuleiro\n");
            }
        }

        for (int m=0; m<3; m++){
            if(m>=0 && m<=9){
                for(int n=0; n<3; n++){
                    if(n>=0 && n<=9){
                        if(m==n){
                            tabuleiro[m][n]=navio3[n];
                        }
                    }
                }
            }
        }
        

        printf("             JOGO DE BATALHA NAVAL\n");    //cabeçalho  de jogo
        printf(" \n");                                     //pula uma linha
        printf("  ");                                      //espaço  impresso para posicionar melhor o cabeçalho de letras
        for (int i=0; i<10; i++){                          //loop para imprimir todos os valores do cabelhado de letras
            printf(" %c", letrasbatalha[i]);            
        }
        printf("\n");                              //pula uma linha no console
        for(int j=0; j<10; j++){                   //loop para imprimir colunas do cabeçalho de numeros 
            printf("%s", colunabatalha[j]); 
            for (int k=0; k<10; k++){              //loop para imprimir todas as linhas da coluna do primeiro loop
                printf(" %d", tabuleiro[j][k]);
            }
        printf("\n");                              //pula uma linha para o efeito de tabela //a linha deve pular depois que segundo loop terminar de preencher todas as linhas de uma coluna  
        }



    return 0;
}
