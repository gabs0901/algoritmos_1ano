//beecrowd 1084
#include <stdio.h>
#include <stdlib.h>

int main (){
    int xi, yi; //posição incial (dama)
    int xf, yf; //posição final (destino)
    int movimentos; //contador de movimentos
    
    //leitura dos valores de entrada
    while(scanf("%d %d %d %d", &xi, &yi, &xf, &yf) && (xi||yi||xf||xi)) {
        //inicializar o contador de movimentos
        movimentos = 0;
        
        //1. verificar se a origem eh igual ao destino
        if((xi == xf) && yi == yf)
            movimentos = 0;
        else {
            //2. verificar se o ponto final esta nas diagonais que passam pela dama        
            if(abs(xi - xf) == abs(yf - yi))
                movimentos = 1;
            else
                //3. verificar se o ponto final esta na horizontal ou vertical
                if (xi == xf || yi == yf)
                    movimentos = 1;
                else
                    movimentos = 2;
        }
        //4. esreve o resultado
        printf("%d\n", movimentos);
    }
    return 0;
}
