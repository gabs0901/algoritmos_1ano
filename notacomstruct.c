#include <stdio.h>

/*
char nomeAluno[10][51];    //vetor de nomes dos alunos
int notaFinal[10];        //vetor de notas
*/
//ao inves de usar o de cima usar o debaixo
typedef struct{
    char nome[51];
    int nota;
} Aluno;

Aluno aluno[10];

int main(){
    //declaracao de variaveis
    int n, i = 0, soma = 0, media = 0;

    //leitura de variaveis
    scanf("%d", &n);
    //processa todos os alunos da turma
    while(n--) {
        scanf("%s %d", aluno[i].nome, &aluno[i].nota);        //("%s %d", nomeAluno[i], notaFinal[i]);
        soma += aluno[i].nota;
        i++;
    }
    //calcula a media da turma
    media = soma/i;
    //verificar alunos acima da media
    printf("Media = %d\n", media);
    for(int j = 0; j < i; j++){
        if(aluno[j].nota > media){
            printf("%s %d\n", aluno[j].nome, aluno[j].nota);  
        }
    }
    return 0;
}
