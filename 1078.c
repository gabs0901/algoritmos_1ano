//beecrowd 1078
#include <stdio.h>

int main (){
	//declaracao de variaveis
    int n; 		//valor a ser lido 
    int i = 1;	//contador	
   	int p; 		//produto
    
 	//leitura de variaveis
    scanf("%d", &n);

    while(i >= 1 && i <= 10){ 		//contar por qual numero vai ser multiplicado 
		p = n * i;
		printf("%d x %d = %d\n", i, n, p);
   	i++;
    }
    
	return 0;    
}
