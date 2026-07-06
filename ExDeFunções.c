//exemplos de funções
#include <stdio.h>

//1. função para somar dois numeros inteiros
//passagem de parametros por valor
int somaInt(int a, int b){
    printf("dentro de somaInt\n")
    int s = a + b;
    a = b = 0;
    printf("a = %d b = %d\n", a, b);
    return s;
}

//2. Função para somar dois numeros inteiors
//passagem de parametros por referencia
int somaIntRef(int *a, int *b){ //ALTERA CONTEUDO DENTRO DO ENDERECO DE MEMORIA, TAMBEM ALTERA A VARIAVEL EXTERNA
    printf("Dentro de somaIntRef\n")    
    int s = *a + *b;    //operador de desreferenciamento, quero pegar o conteudo que esta sendo apontado pela variavel a
    *a = *b = 0;
    printf("a = %d b = %d\n", a, b);
    return s;
}

int main(){
    int x, y;   //passagem de parametro por valor ele nao vai refletir do lado de fora da funcao
                //passagem de parametro por referencia vai refletir do lado de flora da funcao

    

    //passagem de parametros por valor
    scanf("%d %d", &x, &y);
    print("%d + %d = %d\n", x, y, somaInt(x, y));  //pra executar o printf precisa executar a funao soma
    printf("x = %d y = %d\n",x ,y);
    
    //passagem de parametros por referencia
    scanf("%d %d", &x, &y);
    print("%d + %d = %d\n", x, y, somaIntRef(&x, &y));  //pra executar o printf precisa executar a funao soma
    printf("x = %d y = %d\n",x ,y);
    return 0;
}
