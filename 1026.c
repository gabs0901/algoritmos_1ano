//problem 1026 beecrowd
#include <stdio.h>

//função principal
int main (){
    //declaração de variaveis
    unsigned a, b; //variaveis de entrada
    unsigned c; //variaveis de saida    

    while(scanf("%u %u", &a, &b) != EOF){ // comando ctrl+d, fim de arquivo 
        c = (~a & b) | (a & ~b); ///valor da soma sem o carry
        printf("%u\n", c);
    }
    return 0;        
}
