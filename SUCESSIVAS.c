//Criar uma funcao que calcule o fatorial de um numero por multiplicacoes sucessivas
#include <stdio.h>

long fat(int x) //passagem de parametro por valor{
    long f = 1; //caso base
    for(int i = 1; i <= x; i++){    //calculo do fatorial
        f *= i;        
    }
    return f;   //retorno da funcao
}

int main(){
    int n, F;

    printf("N = ");
    scanf("%d", &n);
    
    F = fat(n);
    printf("n! = %l\n", F);

    int k = (fat(4)/fat(2));    //outro uso da funcao fatorial
    printf("\n K = %ld\n", k);
    return 0;
}





