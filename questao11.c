//fazer um for do maior grau ate 0 
//questao 11
#include <stdio.h>

//definição do tipo poly
typedef struct{
    float coef[10];   //array que vai definir os coeficientes(max. 9)
    int grau;   //valor do maior expoentes(max. 9)
} Poly;

//Funções sobre polinômios

//Função para ler polinômios
void scanPoly(Poly *P){    //vou ler o tipo polinomio P //alterar o valor, passagem de param por ref. *
    scanf("%i", &P->grau);      //leitura do grau do polinomio, flecha talvez seja pq seja pass por ref.
    
    for(int i = P->grau; i >= 0; i--){        //varrendo coeficientes do 3 ate o 0
        scanf("%f", &P->coef[i]);
    }
}   

//função para escrever polinomios

void printPoly(Poly P){
    for(int i = P.grau; i >= 0; i--){ //. pq nao eh mais uma referencia e sim um parametro por valor
        printf("%+.2f^%d", P.coef[i], i);
    }
}

//função para somar polinomios
Poly somaPoly(Poly A, Poly B){
    Poly soma;  //variavel de retorno da soma
    
    //determina o maior grau
    soma.grau = (A.grau > B.grau) ? A.grau : B.grau;

    //calcula a soma
    for (int i = soma.grau; i >= 0; i--){
        soma.coef[i] = A.coef[i] + B.coef[i];
    }

    //retorno da soma
    return soma;
}


int main(){
    Poly A, B, R;

    //testa a leitura dos polonomios
    scanPoly(&A);
    printPoly(A);
    R = somaPoly(A, B);
    printPoly(R);

    return 0;
}
