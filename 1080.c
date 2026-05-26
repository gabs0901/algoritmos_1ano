#include <stdio.h>

int main(){
    unsigned valor, maior = 0, pos = 0;  //valor lido, maior valor e posicao do maior

    for (int i = 1; i<=100; i++){
        //le cada valor
        scanf("%d", &valor);
            
        //verifica se eh o maior valor ate o momento
        if (valor > maior){
            maior = valor;
            pos = i;
        }        
    }
    //escreve o resultado
    printf("%d\n%d\n", maior, pos);
    return 0;
}
