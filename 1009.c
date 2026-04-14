//Solução do problema 1009 (Beecrowd)
#include <stdio.h>

int main (){
    //declaração de variaveis
    char nome[10];
    double sal, mt, com; //mt: total de vendas efetuadas
    
    //leitura das variaveis
    scanf("%s %lf %lf", nome, &sal, &mt); //%s(string) - cadeia de caracteres

    //calculo
    com = (mt*0.15); //comissão = total de vendas efetuadas * valor da comissao 
    sal = sal + com; 

    //impressao
    printf ("TOTAL = R$ %.2lf\n", sal);
    return 0;
}
