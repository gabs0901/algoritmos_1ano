//funcao que receba valor inteiro longo e retorne o enesimo elemento da sequencia de fibonacci
#include <stdio.h>

//Função fibonacci

//que tipo vamos retornar na funcao? long

long fib(long i){    //queremos o iesimo elemento da serie
    long f0 = 0;
    long f1 = 1;
    long fn = 1;

    if (i < 1)
        return f0;  
    else {
        for(int j = 1; j < i; j++){
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;        
        }
        return fn;
    }
}

int main(){
    long n;

    for(int i = 0; i < 10; i++){
        printf("fib(%d) = %ld\n", i, fib(i));    
    }
    return 0;
}
