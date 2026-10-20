#include <stdio.h>

int main(){
    FILE *arquivo = fopen("nomes.txt","r");

    //verifica se o arquivo foi aberto
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!!");
        return 1;
    }

    char nomes[50][100];
    int i = 0, j = 0;

    while(fgets(nomes[i], sizeof(nomes[i]), stdin)){
         printf("%s", nomes[i]);
         i++;    
    }
    printf("%s", nomes[2]);
    
}
