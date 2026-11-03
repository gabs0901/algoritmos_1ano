//Files Read and Write.c
//exemplo de escrita de arquivos em C

#include <stdio.h>
#include <stdlib.h>

int main(){
    //declaracao de arquivo texto
    FILE* texto; //variavel arquivo logico: (texto eh a variavel que vou usar pra referenciar o arquivo, FILE* eh do tipo ponteiro para arquivo (tipo fluxo) 
    char filename[50];  //variavel pra armazenar o nome do arquivo a ser gravado
    int num, sum = 0; //le os numeros do arquivo

    //abre o arquivo para leitura/escrita
    //se o arquivo nao existe retorna erro, se existe exibe o conteudo na tela
    printf("Digite o nome do arquivo a ser abrido >> ");
    scanf("%s", filename);  //le o nome do arquivo
    
    //tenta abrir o arquivo no modo "r"
    if((texto = fopen(filename, "r+")) == NULL){  //fopen procura arquivo filename para abrir no modo w
        printf("Erro! o arquivo nao pode ser abrido");    //se deu erro ja faz o tratamento do erro
        exit(1);
    }
    //abertura ok, ler do arquivo
    while(fscanf(texto, "%d", &num) && !feof(texto)){
        sum += num;
    } printf("Soma = %d\n", sum);
    
    //fechamento do arquivo
    fclose(texto);
    return 0;
}
