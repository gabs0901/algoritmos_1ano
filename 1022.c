//beecrowd 1022
#include <stdio.h>
#include <stdlib.h>

typedef struct {        //estrutura anonima
    int n;  //numerador
    int d;  //denominador
} RACIONAL;   //nome do tipo criado
    

int main (){
    //declaracao de variaveis
    RACIONAL A, B;  //numeros a serem operados
    RACIONAL C; //numero resultante  
    char op; //operacao a ser realizada
    int n = 0;

    //leitura dos casos de teste
    scanf("%d", &n);

    //processa os casos de teste
    for (int i = 0; i< n; i++){
        scanf("%d / %d %c %d / %d", &A.n, &A.d, &op, &B.n, &B.d);  //estou lenfo valores e a ate d
        switch(op){
            case '+':   //operacao de soma
                C.n = A.n*B.d + A.d*B.n;
                C.d = A.d*B.d;
                break;
            case '-':   //operacao de subtração
                C.n = A.n*B.d - A.d*B.n;
                C.d = A.d*B.d;
                break;
            case '*':   //operacao de multiplicação
                C.n = A.n*B.n;
                C.d = A.d*B.d;
                break;
            case '/':   //operacao de divisão
                if(B.n == 0){
                    printf("Erro divisao por zero");                                
                    exit(1);
                }
                RACIONAL aux;
                aux.n = B.d;    //inverter o segundo racional
                aux.d = B.n;
                C.n = A.n*aux.n;
                C.d = A.d*aux.d;
        }
        //simplifica os valores de C (resultado)
        int M = C.n;        
        int N = C.d;
        int R;
        //neste passo calculamos o mdc de euclides
        while(n){
            R = M%N;
            M = N;
            N = R;
        }

        RACIONAL D;
        //simplificar
        D.n = C.n / M;
        D.d = C.d / M;

        //resolve denominador negativo
        if(D.d < 0){
            D.n = -1 * D.n;
            D.d = -1 * D.d;
        }
        //escrever o resultado
        printf("%d/%d = %d/%d\n", C.n, C.d,D.n,D.d);
    }
    return 0;
}











































