#include <stdio.h>

typedef struct{
    float real; //parte real
    float imag; //parte imaginaria
} COMPLEXO;


int main(){
    
    COMPLEXO A, B;  //variaveis de entrada
    COMPLEXO S;     //variaveis e saida
    int cases;      //numero de casos de teste

    //leitura do numero de casos de teste
    scanf("%d", &cases);
    getchar();
    while(cases--){
        //le os valores complexos
        char c1, c2;    //caractere i
        char op;    //operador
        scanf("%f %f%c %c %f %f%c", &A.real, &A.imag, &c1, &op, &B.real, &B.imag, &c2);
        getchar();
        printf("Numero A = %.2f %+.2fi\nNumero B = %.2f %+.2fi\n", A.real, A.imag, B.real, B.imag);

        //realiza a operação        
        switch(op){
        case'+': S.real =(A.real + B.real);      //soma de complexos
                 S.imag = (A.imag + B.imag);
                 printf("Soma real: %.2f\nSoma imaginaria: %+.2fi\n", S.real, S.imag);
            break;
        case'-': S.real =(A.real + B.real);      //subtracao de complexos
                 S.imag = (A.imag + B.imag);
                 printf("Soma real: %.2f\nSoma imaginaria: %+.2fi\n", S.real, S.imag);
            break;
        case'*':        //soma de complexos
            break;
        case'/':        //soma de complexos
            break;
        }
    }

    return 0;
}

//testar com input abaixo
//1
//1 +2i + 3 -4i
