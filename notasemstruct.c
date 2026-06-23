#include <stdio.h>

char nomeAluno[10][51];    //vetor de nomes dos alunos
int notaFinal[10];        //vetor de notas

int main(){
    //declaracao de variaveis
    int n;
    int i = 0, soma = 0, media = 0;

    //leitura de variaveis
    scanf("%d", &n);

    //processa todos os alunos da turma
    while(n--) {
        scanf("%s %d", nomeAluno[i], &notaFinal[i]);
        soma += notaFinal[i];
        i++;
    }
    //calcula a media da turma
    media = soma/i;

    //verificar alunos acima da media
    printf("Media = %d\n", media);
    
    for(int j = 0; j < i; j++){
        if(notaFinal[j]> media){
            printf("%s %d\n", nomeAluno[j], notaFinal[j]);  
        }
    }
    return 0;
}
