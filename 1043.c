#include <stdio.h>

int main (){
	//declaracao de variaveis
	float a, b, c, area, perimetro;	//variaveis de entrada
	
	scanf("%f %f %f", &a, &b, &c);
	
	if(a + b > c && a + c > b && b + c > a){
		perimetro = a + b + c;
		printf("Perimetro = %.1f\n", perimetro);
	}else{
		area = ((a+b)*c)/2;
		printf("Area = %.1f\n", area);
	}	
		return 0;
}
