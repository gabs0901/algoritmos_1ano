#include <stdio.h>
#include <stdlib.h>

int main(){
    //declaração de variáveis
    int **M;    //ponteiro principal para as matrizes (* eh um ponteiro pra um inteiro, ** eh um ponteiro que aponta para um ponteiro que aponta pra um inteiro)
    int lin, col;   //numero de linhas e colunas da matriz

    //determina o numero de linhas e colunas
    printf("Nº. de linhas da matriz? >> ");
    scanf("%d", &lin);
    printf("Nº. de colunas da matriz? >> ");
    scanf("%d", &col);

    //alocação da matriz com malloc()
    M = (int**)malloc(lin*sizeof(int*)); //NA HORA DO CASTING O * VEM DEPOIS, numero de linhas * o tamanho doq vai na linha
    //verificar a alocação de m
    if (M == NULL){     //null significa que ele nao conseguiu alocar
        printf("Erro: Não foi possível alocar a matriz.\n");
        exit(1);
    }
    //alocar as linhas
    for(int i = 0; i < lin; i++){       //i que varre todas as linhas
        M[i] = (int*)malloc(col*sizeof(int));   //feita a alocação de cada linha M[i]      
        if (M[i] == NULL){     
           printf("Erro: Não foi possível alocar a linha i.\n");
           exit(i);
        }
    }
    //manipulação da matriz
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            M[i][j] = rand()%100;
        }    
    }   
    //escrever a matriz
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("%3d", M[i][j]);
            if(i < col)   
                printf(" ");
        }
        printf("\n");    
    }
    printf("\n");    

    //desalocação da matriz
    for(int i = 0; i < lin; i++){
        free(M[i]);    
    }        
    free(M);
    return 0;
}

