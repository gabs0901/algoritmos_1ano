//1071 beecrowd
#include <stdio.h>

int main (){    
    int i, x, y, soma = 0;
    
    scanf("%d %d", &x, &y);
    
    if (x > y){
        a = x;
        x = y;
        y = a;
    } for (i = (x%2) ? x+2 : x+1; i < y; i+=2){         //x%2 eh impar, recebe x+2, caso contrario recebe x+1
            soma += i;
    }
    printf("%d\n", soma);
    return 0;
}
