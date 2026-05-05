#include <stdio.h>

int main() {
    int x, qtd;
    
    scanf("%d", &x);
    printf("%d\n", x);
    
    qtd = x / 100;
    printf("%d nota(s) de R$ 100,00\n", qtd);
    x = x % 100;
    
    qtd = x / 50;
    printf("%d nota(s) de R$ 50,00\n", qtd);
    x = x % 50;
    
    qtd = x / 20;
    printf("%d nota(s) de R$ 20,00\n", qtd);
    x = x % 20;
    
    qtd = x / 10;
    printf("%d nota(s) de R$ 10,00\n", qtd);
    x = x % 10;
    
    qtd = x / 5;
    printf("%d nota(s) de R$ 5,00\n", qtd);
    x = x % 5;
    
    qtd = x / 2;
    printf("%d nota(s) de R$ 2,00\n", qtd);
    x = x % 2;
    
    qtd = x / 1;
    printf("%d nota(s) de R$ 1,00\n", qtd);
    
    return 0;
}