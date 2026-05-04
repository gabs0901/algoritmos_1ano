#include <stdio.h>

int main (){
    float x;        //valores lidos //vou chamar todas as variaveis de X pois posso ler em sequencia
    int positivos = 0;  //CONTADOR de positivos
    float somaPos = 0;  //soma dos positivos
    float media;    //media dos positivos
    
    //processamento dos valores
    for (int i = 0; i < 6; i++){
        scanf("%f", &x);
        if (x > 0){
            positivos++;
            somaPos += x; //+= eh igual a soma = soma + x
        }        
    }    
    media = somaPos / positivos; //calcula a media
    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", media);

    return 0;

}
