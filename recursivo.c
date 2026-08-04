#include<stdio.h>
//pensar primeiro na condição de parada, depois as condições que vao manter rodando e se aproximando do resultado final
//adicao========================================================================================================
int soma(int a, int b){
    if(a == 0)
        return b;
    else
        return soma(--a, ++b);  // usando o -- antes do a ele prioriza a subtracao primeiro e depois o conteudo da linha
}
//subtracao============================================================================================================
unsigned sub(unsigned a, unsigned b){
    if(b == 0)
        return a;
    else
        return sub(a-1, b-1);
}
//multiplicacao========================================================================================================
int mult (int a, int b){
    if(b == 0)
        return 0;
    else
        return a + mult (a, --b);
}
//divisao==============================================================================================================
int div(int a, int b){
    if(a < b)
        return 0;
    else
        return 1+div(a-b, b);
}
//potencia=============================================================================================================
int pot (int a, int b){
    if(b == 0)
        return 1;
    else
        return a*pot(a,b-1);
}
//main=================================================================================================================
int main(){
    printf("resultado %d\n", soma(3,2));
    printf("resultado %d\n", sub(3, 2));
    printf("resultado %d\n", mult(3, 2));
    printf("resultado %d\n", div(13, 3));
    printf("resultado %d\n", pot(2, 3));
    return 0;
}
