#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaracao de variaveis
    int *V;  //vetor dinamico
    int n;  //tamanho do vetor V

    //leitura do tamanho do vetor
    printf("Qual o tamanho do vetor? >> ");
    scanf("%d", &n);

    //tentativa de alocação do vetor com o tamanho especificado
    V = malloc(sizeof(int)*n);    //aloca n bytes com tamanho de 1 inteiro sizeof eh o tamanho doq eu quero alocar

    //verifica se alocação funcionou
    if(V == NULL){     //ou (!V)
        printf("Error: nao foi possivel alocar o vetor.\n");
        return 1;   //ou exit(1)
    }
    //preenchimento do vetor
    printf("Criando o vetor...\n");
    for (int i = 0; i < n; i++){
        V[i] = rand()%100;
    }

    //escrita do vetor
    printf("[");
    for(int i = 0; i < n; i++){
        printf("%d",V[i]);
        if(i < n - 1)
            printf(", ");        
    }
    printf("]\n");
    
    free(V);

    return 0;
}
