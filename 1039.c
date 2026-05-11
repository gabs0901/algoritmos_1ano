//beecrowd 1039

#include <stdio.h>
#include <math.h>
//raio do cacador   centro do cacador: x1, xy;
//raio da FLOR      centro da flor: x2, y2;
int main (){
    int rc, xc, yc; //o circulo do cacador possui raio R e centro X e Y
    int rf, xf, yf; //a area da flor possui raio R e centro X e Y
    int dentro;    
    while(scanf("%d %d %d %d %d %d", &rc, &xc, &yc, &rf, &xf, &yf) != EOF){
        //teste se is circulos estao no mesmo centro
        if ((xc == xf) && (yc == yf)) 
            if (rc < rf)
                dentro = 0;    
            else
                dentro = 1;    
        else 
            //verifica se a flor esta no circulo do cacador 
            if (sqrt(pow((xf-xc), 2) + pow((yf-yc), 2)) + rf <= rc)
                dentro = 1;
            else
                dentro = 0;
        printf("%s\n", dentro ? "RICO":"MORTO");    
    }
        return 0;
}
//a distancia do raio 
//se o circulo que ele desenha eh maior que a area da flor, que tem quer maior que a area da flor
//raio do cacador pode ser maior doq o da lfor
    

