//beecrowd 1104
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000001 // quant max de tipos de cartas

int main (){
    //declaracao de variaveis
    int a, b;   //numero de cartas de alice e beatriz respectivamente
    int conjA[MAX], conjB[MAX];     //conjuntos de cartas de alice e beatriz

    //leitura das cartas em cada conjunto
    while(scanf("%d %d", &a, &b) && (a  || b)) {     //se a e b forem 0 ambos tem que parar
        int i, x, intersecao = 0;
        int cartasA = 0, cartasB = 0;

        //inicializar os vetores com zero
        memset(conjA, 0, sizeof(conjA));    //atribui 0 ao vetor conjA
        memset(conjB, 0, sizeof(conjB));    //atribui 0 ao vetor conjB

        //leitura das cartas de alice 
        for(i = 0; i < a; i++) {
            scanf("%d", &x);    //x serve so pra receber os valores de alice e beatriz, mas vao ficar armazenadas nos vetores
            if(!conjA[x])       //insere um novo tipo de carta para alice 
                cartasA++;
            conjA[x]++;
        }
        //leitura das cartas de beatriz
        for(i = 0; i < b; i++) {
            scanf("%d", &x);    //x serve so pra receber os valores de alice e beatriz, mas vao ficar armazenadas nos vetores
            if(!conjB[x])       //insere um novo tipo de carta para alice 
                cartasB++;
            conjB[x]++;        
        }
        //calcular a interseção
        for(i = 0; i < MAX; i++){
            if(conjA[i] && conjB[i])        
                intersecao++;
        }
        //contar as cartas que podem ser trocadas: o tamanho do menor conjunto menos a interseção
        int menor = cartasA < cartasB ? cartasA : cartasB;
        
        //calcular a interseção
        int quant = menor - intersecao;

        printf("%d\n", quant);
    }
    return 0;
}


//agrupar a quantidade de elementos por indice, 
//alice: 2 elementos do tipo 1, 1 do tipo 2, 1-3, 1-5, 1-7, 2-8, 1-15
//beatriz: 3-2, 1-3, 1-4, 1-6, 1-10, 2-11
//interseccao dos dois conjuntos: 1-2 e 1-3
