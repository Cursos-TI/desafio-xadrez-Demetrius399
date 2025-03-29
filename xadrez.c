#include <stdio.h>

#define TORRE 8
#define BISPO 5
#define RAINHA 8

//Função recursiva para calcular o movimento da torre
void moverTorre(int casas) {
    if (casas > 0)
    {
       printf("Movimento da torre: %d casas\n", casas);
       moverTorre(casas - 1);
    }
    
}
//Função recursiva para calcular o movimento do bispo
void moverBispo(int casas) {
    if (casas > 0)
    {
        printf("Movimento do bispo %d casas\n", casas);
        moverBispo(casas - 1);
    }
    
}
//Função recursiva para calcular o movimento da rainha
void moverRainha(int casas) {
    if (casas > 0)
    {
        printf("Movimento da Rainha: %d casas\n", casas);
        moverRainha(casas -1);
    }
    
}
//Função principal

int main(){

        //Cabeçalho do programa
    printf("========================================\n");
    printf("************ Jogo de Xadrez!!***********\n");
    printf("========================================\n");

        printf("\nMovimento da Torre(8 casas para esquerda:\n)");
        moverTorre(TORRE);
            for (int i = 0; i < 5; i++)
            {
                printf("Dirreita \n");
            }
            // movimento do Bispo
            printf("\nMovimento do Bispo(5 casas na diagonal)\n");
            moverBispo(BISPO);
            int i  = 0;
            while (i < 5)
            {
                printf("Cima, Direita \n");
                i++;
            }
            //Movimento da Rainha
            printf("Movimento da Rainha(8 casas para Esquerda\n");
            moverRainha(RAINHA);
            int j = 0;

                do
                {
                   printf("Esquerda");
                   j++;
                } while (j < 8);
                
            
            




    return 0;
}