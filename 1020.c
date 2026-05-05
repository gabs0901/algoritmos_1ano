#include <stdio.h>

int main(){
	//declaracao de variaveis
	int i, a, m, d; //idade da pessoa em dias; variaveis de anos, meses e dias
	
	//leitura de variaveis
	scanf("%d", &i);
	
	//calculo
	a = i /365;
	i = i% 365;
	
	m = i / 30;
	d = i % 30;
	
	//impressao de variaveis
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);
	
	return 0;
}
