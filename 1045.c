#include <stdio.h>

int main() {
   	//declaracao de variaveis
    double a=0, b=0, c=0, x=0, y=0, z=0;
	//leitura de variaveis
   	scanf("%lf %lf %lf", &a, &b, &c);
   	//verifica ordena decrescentemente
    if (a < b){			//regra matematica: se X < Y < Z
			x = a;		//testa se A > B, se for, troca de lugar com o B 
			a = b;       
			b = x;
	}
    if (b < c){			//se o primeiro for maior q o terceiro, estao invertidos
 			y = b;
 			b = c;
 			c = y;
 	}
 	if (a < b){ 		//se sobrou algum invertido, sobrou o segundo com o terceiro
			z = a;
			a = b;
			b = z;
	}
    //verificacao de triangulos
    if (a >= (b + c))
    	printf("NAO FORMA TRIANGULO\n");
	else if (a*a == (b*b + c*c))
		  printf("TRIANGULO RETANGULO\n");
	else if (a*a > (b*b + c*c))
		  printf("TRIANGULO OBTUSANGULO\n");
	else if (a*a < (b*b + c*c))
		  printf("TRIANGULO ACUTANGULO\n");
		  
	if (a == b && a == c){
		printf("TRIANGULO EQUILATERO\n");
	}else if (a == b && a != c|| a == c && a != b|| b == c && b != a){
		printf("TRIANGULO ISOSCELES\n");
	}
	return 0;
}
