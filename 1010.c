//Sulução do problema 1010.c (Beecrowd)
#include <stdio.h>

int main (){    
    //declaracao de variaveis
    int codp1, codp2; //codigos das peças 1 e 2
    int nump1, nump2; // quantidades das peças 1 e 2
    float valp1, valp2; //valores das peças 1 e 2
    float totalpag; //total a pagar


    //leitura de variaveis
    scanf("%d %d %f", &codp1, &nump1, & valp1);
    scanf("%d %d %f", &codp2, &nump2, & valp2);
    
    //calcular o total a pagar
    totalpag = nump1*valp1 + nump2*valp2;

    //impressao 
    printf("VALOR A PAGAR: R$ %.2f\n", totalpag);

    return 0;
}
