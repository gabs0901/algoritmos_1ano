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

//aula 2================================================================================================================
//calcular mdc============================================================================================================
int mdc(int a, int b){
    if(b == 0)
        return a;
    else 
        return mdc(b, a%b);
}
//contar digitos================================================================================================================
int contadig(int num, int dig){
    if(num < 10){       //verifica se soh tem um digito, ou ele eh = ou !=    
        return (num == dig) ? 1 : 0;
    }else{
        if(num%10 == dig) //separar os dois digitos pra contar, contar da direita pra esquerda
            return 1 + contadig(num/10, dig);
        else
            return contadig(num/10, dig);
    }
}
//somatorio de vetores==========================================================================================================
int somavet(int v[], int n){
    if(n == 0)
        return 0;
    else 
        return v[n-1] + somavet(v, n-1);
}
//inverter vetores==================================================================================================================
void invertevet(int v[], int i, int j){
    if(j > i){
        int t = v[j-1];
        v[j-1] = v[i];
        v[i] = t;
        invertevet(vet, j+1, j-1);
    }
}
//main==========================================================================================================================
int main(){
    printf("resultado %d\n", soma(3,2));
    printf("resultado %d\n", sub(3, 2));
    printf("resultado %d\n", mult(3, 2));
    printf("resultado %d\n", div(13, 3));
    printf("resultado %d\n", pot(2, 3));

    //aula 2====================================================================================================================
    int v[] = {1, 2, 3, 4};
/*  int v[4];   //tamanho do vetor
    
    for (int i = 0; i < 4; i++) {                   //inserção dos elementos e leitura do vetor
        printf("Digite o %dº elemento: ", i + 1);
        scanf("%d", &v[i]);
    }    */
    printf("resultado %d\n", mdc(45,32));
    printf("resultado %d\n", contadig(12110,1));
    printf("resultado %d\n", somavet(v,4));
    return 0;
}
