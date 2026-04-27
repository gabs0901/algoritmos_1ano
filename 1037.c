#include <stdio.h>

//se ta fechado dos dois lados: tem que ser >= 0 e <= 25 [0,25]
//so maior q 25 e <= 50 (25,50]
//4 testes, poderia colocar em 4 ifs separados
//testes mutualmente exclusivos

int main (){
    //declaracao de variaveis
    float x;
    
    //leitura de caracteres
    scanf("%f", &x);

    //cadeia de testes individuais
    if (x >= 0 && x <= 25)
        printf("Intervalo [0,25]\n");
    else if (x > 25 && x <=50)
        printf("Intervalo (25,50]\n");
    else if (x > 50 && x <= 75)
        printf("Intervalo (50,75]\n");
    else if (x > 75 && x <= 100)
        printf("Intervalo (75,100]\n");
    else 
        print("Fora de intervalo\n");
        return 0;

}
 
