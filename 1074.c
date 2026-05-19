//beecrowd 1073
#include <stdio.h>

int main (){
    int n; //quantidade de valores que serao lidos em seuguida
    int x; //variaveis lidas            
    int i=0; //contador    
    
    scanf("%d", &n);
    
    while (i < n){
        scanf("%d", &x);
        if(x == 0)                              //verifica se eh = 0
            printf("NULL\n");
        else if(x < 0)                          //verifica se eh negativo
                if(x % 2 == 0)            
                    printf("EVEN NEGATIVE\n");    //negativo par
                else 
                    printf("ODD NEGATIVE\n");      //negativo impar
             else 
                if(x % 2 == 0)                  //else, verifica se eh par
                    printf("EVEN POSITIVE\n");
                else
                    printf("ODD POSITIVE\n");      //impar
        i++;
    } 
    return 0;
}
