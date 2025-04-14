#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
        int tabuleiro[10][10]={                         //declaração de matriz 10x10, inicialmente todos os valores da matriz são 0
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
        char letrasbatalha[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'              //declaração de cabecalho de letras para mapeamento e orientação usuario
        };
        char *colunabatalha[10] = { " 1", " 2", " 3", " 4", " 5", " 6", " 7", " 8", " 9", "10"   //declaração de cabecalho de numeros para mapeamento e orientação do usuario
        };
        int index=0;
        int aux=0;

        int navio[3] = {3, 3, 3};       //declaração do vetor do primeiro navio
        int navio2[3] = {3, 3, 3};      //declaração do vetor do segundo navio
        int navio3[3] = {3, 3, 3};      //declaração do vetor do terceiro navio
        int navio4[4] = {3, 3, 3};      //declaração do vetor do quarto navio

        index=2;                                 //variavel que mantem um indice fixo

        for (int k=0;  k<3; k++){                //loop para percorrer colunas //neste caso a linha é fixa
            if (k>=0 && k<=9){                   //se a coluna existir dentro do tabuleiro será feita a ação
             tabuleiro[index][k]=navio[k];       //tabuleiro com linha fixa ira receber valor da vetor na coluna do loop 
            }else{printf("essa posição esta fora do tabuleiro\n");} //se a coluna não existir no tabuleiro sera impresso a mensagem
        }

        index=7;                                 //variavel que mantem um indice fixo  

        for(int l=0; l<3; l++){                  //loop para percorrer linhas //neste caso a coluna é fixa
            if (l>=0 && l<=9){                   //se a linha existir dentro do tabuleiro será feita a ação
                tabuleiro[l][index]=navio2[l];   //tabuleiro com coluna fixa ira receber valor do vetor na linha do loop
            }else{printf("essa posição esta fora do tabuleiro\n");} //se a coluna não existir no tabuleiro sera impresso a mensagem
        }
        

        for (int m=0; m<3; m++){                         //loop para percorrer linhas
            if(m>=0 && m<=9){                            //se a linha existir dentro do tabuleiro será feita a ação
                for(int n=0; n<3; n++){                  //loop para percorrer colunas
                    if(n>=0 && n<=9){                    //se a coluna existir dentro do tabuleiro será feita a ação
                        if(m==n){                        //se indice de linha = indice de coluna (interseção) será feito a ação
                            tabuleiro[m][n]=navio3[n];   //tabuleiro irá receber valor de navio na linha e coluna do loop
                        }
                    }else{printf("essa posição esta fora do tabuleiro\n");}
                }
            }else{printf("essa posição esta fora do tabuleiro\n");}
        }
        
        for(int o=4; o<7; o++){                            //loop para percorrer linhas
            if(o>=0 && o<=9){                              //se a linha existir dentro do tabuleiro será feita a ação
                for(int p=5; p>2; p--){                    //loop para percorrer colunas
                    if(p>=0 && p<=9){                      //se a coluna existir dentro do tabuleiro será feita a ação
                        if(o+p==9){                        //se a soma de indice linha e coluna igual 9 será feita a ação  //a interseção de linha crescente e coluna decrescente em uma tabela 10x10 ocorre quando a soma de linha e coluna é 9
                            tabuleiro[o][p] = navio4[0];   //tabuleiro irá receber valor de navio na linha e coluna do loop
                        }
                    }else{printf("essa posição esta fora do tabuleiro\n");}
                }
            }else{printf("essa posição esta fora do tabuleiro\n");}
        }

        for(int q=7; q<10; q++){                          //loop para percorrer linhas
           int inicio=3-1-aux;                            //declara inicio do cone
           int fim=3-1+aux;                               //declara fim do cone
            for(int r=inicio; r<=fim; r++){               //loop de linhas
                tabuleiro[q][r]=1;                        //coordenada no tabuleiro recebe valor 1 para cone
            }
            aux++;                                        //incrementa variavel 'aux' que auxilia no formato do cone
        }

        for (int s=6; s<9; s++){                //loop para percorrer linhas
            int meio=7;                         //variavel que posiciona os meios da cruz
            for (int t=5; t<10; t++){           //loop para percorrer colunas 
                tabuleiro[meio][t]=1;           //linha do meio recebe valor 1 para cruz
                tabuleiro[s][meio]=1;           //coluna do meio recebe valor 1 para cruz
            }
        }

        for(int u=4; u<7; u++){                 //loop  para percorrer linhas
            int metade=1;                       //variavel posiciona meio do octaedro
            for(int v=0; v<3; v++){             //loop para percorrer colunas
                if(u==5){                       //condicional de posicionamento do octaedro
                    tabuleiro[5][v]=1;          //coluna recebe valor 1 para octaedro
                }
               tabuleiro[u][metade]=1;          //linha recebe valor 1 para octaedro
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
