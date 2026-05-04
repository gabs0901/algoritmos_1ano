#include <stdio.h>  

int main (){
    int x;       
    int pares = 0;  //contador de pares
    int impares = 0;
    int positivos = 0;
    int negativos = 0;
    int i = 0;

    //somar pares e impares e somar negativos e positivos
    
    while (i < 5){
        scanf("%d", &x);
        if (x%2 == 0) //somar pares e impares e somar negativos e positivos
            pares++;
        else
            impares++;        
    }
    return 0;

}
