//beecrowd 1070
#include <stdio.h>

int main (){
    int x, i;

    scanf("%d", &x);

    for (i = 0; i < 6; i++){
        if (x % 2 != 0){            
            printf("%d\n", x);
        } else if (x % 2 == 0){
            x = x + 1;
            printf("%d\n", x);
        }
        x = x + 2;
    }
    return 0;
}
