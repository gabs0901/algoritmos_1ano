#include <stdio.h>  

int main (){
    int x;        //valores lidos //vou chamar todas as variaveis de X pois posso ler em sequencia
    int pares = 0;  //CONTADOR de pares
    int i = 0;

    while(i < 5){
        scanf("%d", &x);
        if (x%2 == 0){
            pares++;
        } i++;  
    }
    printf("%d valores pares\n", pares);

    return 0;
}
