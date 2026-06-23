//ex vector com struct
#include <stdio.h>

//definicao do tipo VECTOR
typedef struct{
    int V[1000];    //array interno
    int len;         //tamanho do array
} VECTOR;

//definicao do tipo MATRIX
typedef struct{
    int M[1000][1000][1000];    //array interno     //matriz de 3 dimensoes
    int lin, col, pagina;         //linhas e colunas //e paginas
} MATRIX;

int main (){
    //inicializa o vetor A
    VECTOR A, B;
    A.len = 0;  //c obriga a varrer o vetor inteiro ate encontar o primeiro \0

    MATRIX A, B;
    A.lin = 2;
    A.col = 2;

    //A.len comprimento do a B.en compr do B, A.V vetor do a, B.V vetor do b

    //inclui um elemento no vetor
    A.len++;    //adicionando uma posicao
    A.V[A.len -1] = 1;

    //inclui um elemento no vetor
    A.len++;    //adicionando uma posicao
    A.V[A.len -1] = 2;


    //imprime o vetor
    for(int i = 0; i < A.len; i++){
        printf("%d ", A.V[i]);       
    }
    return 0;
}



