#include <stdio.h>

//funcao principal
int main (){

    //declaracao das matrizes A B C
    short A[10][10] = {}, B[10][10] = {}, C[10][10] = {};  //numeros de linhas e colunas respectivamente //alocacao estatica, reserva fixamente 10 linhas e colunas; nao preciso necessariamente usar os 10 elementos; forcando elas como vazias com = {};
    short mA, nA;   //nº de linhas e colunas de A    
    short mB, nB;   //nº de linhas e colunas de B    
    short mC, nC;   //nº de linhas e colunas de C   
                  
    //le o nmr de linhas e colunas de A              
    printf("Entre com o numero de linhas de A (Max.10) >> ");
    scanf("%hd", &mA);
    printf("Entre com o numero de colunas de A (Max.10) >> ");
    scanf("%hd", &nA);

    //leitura dos valores da matriz A;                    //para cada posicao dentro de mxn preciso ler cada elemento
    for (short i=0; i < mA; i++){             //contador variando ate o numero de linhas
        for(short j=0; j < nA; j++){          //contador variando ate o numero de colunas
            scanf("%hd",&A[i][j]);
        }
    }    

    //le o nmr de linhas e colunas de B              
    printf("Entre com o numero de linhas de B (Max.10) >> ");
    scanf("%hd", &mB);
    printf("Entre com o numero de colunas de B (Max.10) >> ");
    scanf("%hd", &nB);

    //leitura dos valores da matriz A;
    for (short i=0; i < mB; i++){             //contador variando ate o numero de linhas
        for(short j=0; j < nB; j++){          //contador variando ate o numero de colunas
            scanf("%hd",&B[i][j]);
        }
    }  


    //escreve as duas matrizes A e B
    //escrita dos valores da matriz A
    printf("Matriz A:\n");
    for (short i=0; i < mA; i++){             //contador variando ate o numero de linhas
        printf("|");        
        for(short j=0; j < nA; j++){          //contador variando ate o numero de colunas
            printf("%hd", A[i][j]);
            if(j < nA - 1)
                printf(" ");
        }
        printf("|\n");
    }printf("\n");

    //escrita dos valores da matriz B 
    printf("Matriz B:\n");    
    for (short i=0; i < mB; i++){             //contador variando ate o numero de linhas
        printf("|");        
        for(short j=0; j < nB; j++){          //contador variando ate o numero de colunas
            printf("%hd", B[i][j]);
            if(j < nB - 1)
                printf(" ");
        }
        printf("|\n");
    }printf("\n");

/*    
    //soma as matrizes A e B na matriz C
    for(short i = 0; i < mA; i++){
        for(short j = 0; j < mA; j++){
        C[i][j] = A[i][j] + B[i][j];
        }
    }

    //atribui os valores de linhas e colunas para a matriz c
    mC = mA; nC = nA;

    //escreve a soma das matrizes

    printf("Matriz Soma:\n");    
    for (short i=0; i < mC; i++){             //contador variando ate o numero de linhas
        printf("|");        
        for(short j=0; j < nC; j++){          //contador variando ate o numero de colunas
            printf("%hd", C[i][j]);
            if(j < nC - 1)
                printf(" ");
        }
        printf("|\n");
    }
*/
  
    //limpa linhas        
    for(short i = 0; i < mC; i++) {
       for(short j = 0; j < nC; j++) {
          C[i][j] = 0;
        }
    }
 
    //multiplicacao das matrizes A e B
    for(short i = 0; i < mA; i++){
        for(short j = 0; j < nA; j++){
            for(short k = 0; k < nA; k++)
                    C[i][j] += A[i][k] * B[k][j];
            }
        }
    }    

    //atribui a soma das matrizes
    mC = mA; nC = nB;

    //escreve a soma das matrizes
    printf("Matriz Multiplicacao:\n");    
    for (short i=0; i < mC; i++){             //contador variando ate o numero de linhas
        printf("|");        
        for(short j=0; j < nC; j++){          //contador variando ate o numero de colunas
            printf("%hd", C[i][j]);
            if(j < nC - 1)
                printf(" ");
        }
        printf("|\n");
    }
    return 0;
}
