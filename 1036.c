//Solução do problema 1036 (Beecrowd)
#include <stdio.h>
#include <math.h>

int main (){
//delta negativo e coeficiente a = 0
//se o A = 0 ou delta negativo = imprimir impossivel
// se nao ocorrer, fazer bhaskara 
    
    double a, b, c; //variaveis de entrada e saida
    double delta, x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);
    delta = pow(b, 2)-(4*a*c); //pow(b, 2)
    
    if(a == 0 || delta < 0){
        printf("Impossivel calcular\n");
        return 0;
    } else if (delta == 0) 
        x1 = x2 = -b/(2*a);
     else {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
    }
    printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);

    return 0;
}
