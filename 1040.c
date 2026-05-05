//Solução do problema 1040 (Beecrowd)
#include <stdio.h>

int main(){
    //declaração de variáveis
    float n1, n2, n3, n4, media, newMedia, exame; //variáveis de entrada
    
    //leitura de variaveis
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    //calculo
    media = (n1*2 + n2*3 + n3*4 + n4*1)/10;
    if (media >= 7.0)
        printf("Media: %.1f\nAluno aprovado.\n", media);
    else if (media < 5.0)
        printf("Media: %.1f\nAluno reprovado.\n", media);
    else if (media > 5.0 || media < 6.9){
        printf("Media: %.1f\nAluno em exame.\n", media);
		scanf("%f", &exame);
        newMedia = (media + exame)/2;
        if (newMedia >= 5.0)
        	printf("Nota do exame: %.1f\nAluno aprovado.\nMedia final: %.1f\n", exame, newMedia);
        else if (newMedia <= 4.9)
            printf("Aluno reprovado.\nMedia final: %.1f\n", newMedia);	
        }
    return 0;
}
