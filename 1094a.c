#include <stdio.h>

int main (){
    int n, quantidade, coelhos =0, ratos = 0, sapos = 0, totalCobaias = 0;
    float pCoelhos, pRatos, pSapos;
    char tipo;

    scanf("%d", &n);
    while(n--){
        scanf("%d %c", &quantidade, &tipo);
        totalCobaias += quantidade;
        switch(tipo){
            case'C': coelhos += quantidade; break;
            case'R': ratos += quantidade; break;
            case'S': sapos += quantidade; break;
        }        
    }

    pCoelhos = (float)coelhos*100/totalCobaias;
    pRatos = (float)ratos*100/totalCobaias;
    pSapos = (float)sapos*100/totalCobaias;

    printf("Total: %d cobaias\n",totalCobaias);
    printf("Total de coelhos: %d\n",coelhos);
    printf("Total de ratos: %d\n",ratos);
    printf("Total de sapos: %d\n",sapos);
    printf("Percentual de coelhos: %.2f %%\n",pCoelhos);
    printf("Percentual de ratos: %.2f %%\n",pRatos);
    printf("Percentual de sapos: %.2f %%\n",pSapos);

    return 0;
}
