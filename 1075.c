//beecrowd 1073
#include <stdio.h>

int main (){
	//declaracao de variaveis
    int n; 		//valor a ser lido 
    int i = 1;	//contador
 
 	//leitura de variaveis
    scanf("%d", &n);

    while(i < 10000){
        if(i % n == 2)
        	printf("%d\n", i);
   	i++;
    }
    return 0;
}
