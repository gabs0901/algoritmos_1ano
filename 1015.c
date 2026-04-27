#include <stdio.h>
#include <math.h>

int main()
{
    //declaracao de variaveis
    float x1, x2, y1, y2, d1, d2; //variaveis de entrada 

    //leitura de variaveis
    scanf("%f, %f, %f, %f", &x1, &y1, &x2, &y2);
   
   //calculo
    d1 = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    d2 = sqrt(d1);

   //impressao de variaveis
    printf("%.4f", d2);
    
    return 0;
}