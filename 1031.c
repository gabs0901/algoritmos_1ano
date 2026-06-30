#include <stdio.h>

int x;  //quant de regioes
int y;  //tamanho do salto
int i, j, k;    //controles para os lacos de repeticao
int fila[100];  //fila de cidades

int main(){
    //processa todos os casos de teste
    while(scanf("%d", &x) && x){
        y = 0;  //tentar achar um valor de y cujo resultado da remocao de cidades resulte na ultima empresa
        for(j = 0; j < x; j++){
            fila[j] = j + 1;       
        }
        //tentar achar um valor de salto que termina com 13
        while(fila[0] != 13){
            y = y+1;
            i = x;
            for(j = 0; j < i; j++){
                fila[j] = j + 1;            
            }
            //processa a fila das cidades
            j = 0;
            while (i > 1) {
                //apagar a cidade na posição j
                for(k = j; k < (i-1); k++){ //comecando em j pq quero apagar j, preciso mover que ta atras de j uma pos pra frente
                    fila[k] = fila[k+1];    //anda uma posicao pra es   querda
                }
                fila[k = 0];                
                i--; //decrementa o numero da filla
                //slata para a proxima cidade a ser apagada
                j = (j + y - 1) % i; //aritmetica modular para voltar ao inicio da fila
            }
        }   
        //imprime o resultado
        printf("%d\n", y);   
    }
    return 0;
}


