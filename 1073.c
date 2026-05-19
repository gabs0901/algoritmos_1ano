//beecrowd 1073
#include <stdio.h>

int main (){
    //declaração de variáveis
    int n; //n de entradas a processar
    int x = 2; //valores a processar
    
    scanf("%d", &n);
    //processa os quadrados    
    do {
        printf("%d^%d = %d\n", x, 2, x*x);       
        x+=2;    
    } while(x <=  n);

    return 0;
}
