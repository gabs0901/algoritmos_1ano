//Files02.c
//exemplo de escrita de arquivos em C

#include <stdio.h>
#include <stdlib.h>

int main(){
    //declaracao de arquivo texto
    FILE* texto; //variavel arquivo logico: (texto eh a variavel que vou usar pra referenciar o arquivo, FILE* eh do tipo ponteiro para arquivo (tipo fluxo) 
    char filename[50];  //variavel pra armazenar o nome do arquivo a ser gravado
    char linha[101];    //linha de texto a ser lido dp arquivo

    //abre o arquivo para leitura
    //se o arquivo nao existe retorna erro, se existe exibe o conteudo na tela
    printf("Digite o nome do arquivo a ser abrido >> ");
    scanf("%s", filename);  //le o nome do arquivo
    
    //tenta abrir o arquivo no modo "r"
    if((texto = fopen(filename, "r")) == NULL){  //fopen procura arquivo filename para abrir no modo w
        printf("Erro! o arquivo nao pode ser abrido");    //se deu erro ja faz o tratamento do erro
        exit(1);
    }
    //abertura ok, ler do arquivo
    while(fgets(linha, 100, texto)){    
            //fgets(linha, 100, texto)          //vou ler pra linha, ler no maximo 100 charact, ler de texto
            //if(!feof(texto))  //feof so detecta o final de arquivo apos a leitura, ent chamar antes nao faz efeito        
        printf("%s", linha);
    }
        //final de arquivo so eh sinalizado quando a tentativa de ler alguma coisa do arquivo falha
    //stdout escreve na tela, *texto escreve no arquivo

    //fechamento do arquivo
    fclose(texto);
    return 0;
}
