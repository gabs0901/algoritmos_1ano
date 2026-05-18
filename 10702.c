//beecrowd 1070
#include <stdio.h>

int main (){
    int c = 0, i, x;

    scanf("%d", &x);

    for (i = (x % 2) ? x: x + 1; c < 6; i+= 2, c++){
        printf("%d\n", x);
    }
    return 0;
}
