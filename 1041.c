//Solução do problema 1041 (Beecrowd)
#include <stdio.h>

int main (){
    //declaração de variáveis
    float x, y; //coordenadas x e y do ponto
    
    //leitura das variaveis
    scanf("%f %f", &x, &y);
    
    //testa  localização do ponto
    if (x == 0 && y == 0) // testa a origem
        printf("Origem\n");
    else if (x != 0 && y == 0) //testa o eixo x
        printf("Eixo X\n");
    else if (x == 0 && y != 0) //testa o eixo y
        printf("Eixo Y\n");    
    else if (x > 0 && y > 0) //testa Q1
        printf("Q1\n");       
    else if (x < 0 && y > 0) //testa Q2
        printf("Q2\n");  
    else if (x < 0 && y < 0) //testa Q3
        printf("Q3\n"); 
    else if (x > 0 && y < 0) //testa Q4
        printf("Q4\n"); 
    return 0;
}
