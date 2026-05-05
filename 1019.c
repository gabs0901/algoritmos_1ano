#include <stdio.h>

int main(){
    //declaracao de variaveis
    int x, h, m, s; //horas, minutos e segundos

    //leitura de variaveis
    scanf("%d", &x);

    //calculos
    h = x / 3600;
    x = x % 3600;
	
	m = x / 60;
	s = x % 60;
	
    printf("%d:%d:%d\n", h, m, s);

	return 0;

}
