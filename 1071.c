#include <stdio.h>

int main (){
    int x, y, i, s=0;
        
    scanf("%d %d", &x, &y);
    
    if (x > y){
        int a = x;
        x = y;
        y = a;
    } 
    for (i = 0; x < y; i+=2){
        if(x%2)
            x + 2;
        else
            x + 1;

    }     s += i;
    printf("%d\n", s);
    return 0;
}



