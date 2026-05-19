//beecrowd 1072
#include <stdio.h>

int main (){
    //declaração de variáveis
    int n;          //quantidade de valores inteiros a serem testados
    int x;          //cada um dos valores testados no intervalor [10,20]
    int in = 0;     //contador de elementos no intervalo
    int out = 0;    //contador de elementos fora do intervalo

    //leitura do numero de entradas
    scanf("%d", &n);

    //processamento das entradas
/*    while(n--){
        scanf("%d", &x);
        if(x >= 10 && x <= 20)
            in++;
        else 
           out++;
    }
*/
    for (x >= 10 && x <= 20 ? in++ : out++; n--)    
        scanf("%d", &x);

    //imprime o resultado
    printf("%d in\n%d out\n", in, out);
    return 0;
}
