#include <stdio.h>

int main(){
	//leitura de variaveis
	double x; //quantia lida com duas casas decimais
	long inteiros;
    long decimais;
    long n;
    
    scanf("%lf", &x);
    
    x *= 100; //multiplica por 100 para separar parte inteira
	inteiros = (long)x / 100;	//pega a parte inteira    
    decimais = (long)x % 100;	//pega a parte decimal
    
    n = inteiros / 100;
    printf("NOTAS:\n%ld nota(s) de R$ 100.00\n", n);
    inteiros %= 100;
    
    n = inteiros / 50;
    printf("%ld nota(s) de R$ 50.00\n", n);
    inteiros %= 50;
    
    n = inteiros / 20;
    printf("%ld nota(s) de R$ 20.00\n", n);
    inteiros %= 20;
    
    n = inteiros / 10;
    printf("%ld nota(s) de R$ 10.00\n", n);
    inteiros %= 10;
    
    n = inteiros / 5;
    printf("%ld nota(s) de R$ 5.00\n", n);
    inteiros %= 5;
    
    n = inteiros / 2;
    printf("%ld nota(s) de R$ 2.00\n", n);
    inteiros %= 2;
    
    n = inteiros / 1;
    printf("MOEDAS:\n%ld moeda(s) de R$ 1.00\n", n);
    inteiros %= 1;
    
    n = decimais / 50;
    printf("%ld moeda(s) de R$ 0.50\n", n);
    decimais %= 50;
    
    n = decimais / 25;
    printf("%ld moeda(s) de R$ 0.25\n", n);
    decimais %= 25;
    
    n = decimais / 10;
    printf("%ld moeda(s) de R$ 0.10\n", n);
    decimais %= 10;
    
    n = decimais / 5;
    printf("%ld moeda(s) de R$ 0.05\n", n);
    decimais %= 5;
    
    n = decimais / 1;
    printf("%ld moeda(s) de R$ 0.01\n", n);
    decimais %= 1;
    
    return 0;
}
