#include <stdio.h>
#include <math.h>

//função F1
int f1(int x, int y){
    return(pow(x + y, 2));
}

int main (){
    int x, y;   //valores de entrada
    
    while(scanf("%d %d", &x, &y) != EOF){
        int z = f1(x, y);
        printf("f1(%d, %d) = %d\n", x, y, z);
    }
    return 0;
}
