
//Solução do problema 1014 (Beecrowd) 
#include <stdio.h>

int main()
{
    //declaracao de variaveis
    int x;                  //x = distancia total percorrida
    float y, cm;            //y = total de combustivel gasto, cm = consumo medio
   
    //leitura de variaveis
    scanf("%d %f", &x, &y);
   
   //calculo
    cm = x / y;
   
   //impressao de variaveis
    printf("%.3f km/l\n", cm);
    
    return 0;
}