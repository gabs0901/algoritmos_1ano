//Files01.c
//exemplo de escrita de arquivos em C

#include <stdio.h>
#include <stdlib.h>

int main(){
    //declaracao de arquivo texto
    FILE* texto; //variavel arquivo logico: (texto eh a variavel que vou usar pra referenciar o arquivo, FILE* eh do tipo ponteiro para arquivo (tipo fluxo) 
    char filename[50];  //variavel pra armazenar o nome do arquivo a ser gravado

    //abre o arquivo pra escrita
    //primeira coisa a fazer em manipulacao de arquivo
    //se o arquivo nao existe ele sera criado, se existe sera apagado e recriado
    printf("Digite o nome do arquivo a ser abrido >> ");
    scanf("%s", filename);  //le o nome do arquivo
    
    //tenta abrir o arquivo no modo "r"
    if((texto = fopen(filename, "w")) == NULL){  //fopen procura arquivo filename para abrir no modo w
        printf("Erro! o arquivo nao pode ser abrido");    //se deu erro ja faz o tratamento do erro
        exit(1);
    }
    //abertura ok, escreve no arquivo
    fprintf(texto, "Imagina um cara ser acusado de suicidio\n");    //pede o fluxo (no caso a tela que estamos digitando),
    fprintf(texto, "E nao tenha sido ele o assassino\n");
    fprintf(texto, "O que a familia do morto quer?\n");
    fprintf(texto, "Que ele seja morto\n");
    fprintf(texto, "\t\tPresidente Lule, 2023.\n");
    
    //stdout escreve na tela, *texto escreve no arquivo

    //fechamento do arquivo
    fclose(texto);
    return 0;
}
