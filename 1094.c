//beecrowd 1094.c
#include <stdio.h>

int main (){
    //declaracao de variaveis
    int n, qtd;//casos de teste, quantidade de cobaias
    char tipo; // tipo de cobaia
    int tc, tr, ts, qt, total;
    float pc, pr, ps;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d %c", &qtd, &tipo);
            switch (tipo){
                case'C': tc += qt; break;
                case'R': tr += qt; break;
                case'S': ts += qt; break;
             }
        total += qt;    
    }
    
    pc = ((float)tc/total)*100;
    pr = ((float)tr/total)*100;
    ps = ((float)ts/total)*100;

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%", total, tc, tr, ts, pc, pr, ps);

    return 0;
}
