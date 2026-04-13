//Solução do problema 1008 (Beecrowd)
#include <stdio.h>

int main(){
    //declaracao de variaveis
    int func, hr; //entrada de dois numeros inteiros    
    float val, sal; //c como entrada e s como saida

    //leitura de variaveis
    scanf ("%d %d %f", &func, &hr, &val);
       
    //calculo
    sal = hr * val;
    
    //impressao das variaveis
    printf("NUMBER = %d\n""SALARY = U$ %f", func,sal);

    return 0


}
