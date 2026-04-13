#include <stdio.h>

int main () {
    //declaracao de varivel
    int a, b, s; //a e b como entrada e s como saida

    //leitura dos dois inteiros
    scanf("%d %d", &a, &b);

    //calculo
    s = a*b;
    
    //impressao
    printf("PROD = %d\n", s);
    
    return 0;
}
