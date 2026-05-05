#include <stdio.h>
 
int main() {
    //declaração de variáveis
    short cod; //codigo do produto
    short qtd; //quantidade do produto
    float tot; //total a pagar
    
    //leitura de variáveis de entrada
    scanf("%hd %hd", &cod, &qtd);
    switch (cod){
        case 1: tot = 4*qtd; break;
        case 2: tot = 4.50*qtd; break;
        case 3: tot = 5*qtd; break;
        case 4: tot = 2*qtd; break;
        case 5: tot = 1.50*qtd; break;
    }    
    printf("Total: R$ %.2f\n", tot);
    return 0;
}
