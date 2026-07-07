//beecrowd 1146
#include <stdio.h>

//==================================================================================================================
//função para verificar se um numero eh perfeito
//entrada: o numero a ser verificado
//retorno: 0 - se o numero nao eh perfeito; 1- se o numero eh perfeito
//==================================================================================================================

//==================================================================================================================
//int eh o valor de retorno, vamos retornar o perfeito
int perfeito(unsigned n){
    int soma = 0;
    
    //procura os divisores e acumula em soma
    for(unsigned i = 1; i < n; i++){
        if(n % i == 0)   //verificar se todos os is menores que n sao divisores    
        soma += i;    
    }
    return (soma == n ? 1 : 0);  //soma eh igual a n? se for volta 1 se nao volta 0
}

//==================================================================================================================
//Função main
//==================================================================================================================
int main(){
    unsigned n, x;  //n eh o numero de casos e x eh cada numero a ser testado

    scanf("%u", &n);
    while(n--){
        scanf("%u", &x);
        if(perfeito(x))
            printf("%u eh perfeito\n", x);
        else
            printf("%u nao eh perfeito\n", x);
    }
    return 0;
}
