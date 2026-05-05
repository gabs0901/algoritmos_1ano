#include <stdio.h>

int main(){
	//leitura de variaveis
	long x, qtd;
    
    scanf("%ld", &x);
    
    qtd = x / 100;
    printf("NOTAS:\n%ld nota(s) de R$ 100.00\n", qtd);
    x = x % 100;
    
    qtd = x / 50;
    printf("%ld nota(s) de R$ 50.00\n", qtd);
    x = x % 50;
    
    qtd = x / 20;
    printf("%ld nota(s) de R$ 20.00\n", qtd);
    x = x % 20;
    
    qtd = x / 10;
    printf("%ld nota(s) de R$ 10.00\n", qtd);
    x = x % 10;
    
    qtd = x / 5;
    printf("%ld nota(s) de R$ 5.00\n", qtd);
    x = x % 5;
    
    qtd = x / 2;
    printf("%ld nota(s) de R$ 2.00\n", qtd);
    x = x % 2;
    
	qtd = (x * 100)/100;
    printf("MOEDAS:\n%ld moeda(s) de R$ 1.00\n", qtd);
    x = x % 100;
   	
   	qtd = (x * 50)/50;
   	printf("%ld moeda(s) de R$0.50\n", qtd);
	x = x % 50;
	
	
	return 0;

}
    
