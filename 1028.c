#include <stdio.h>

int i, n, f1, f2;

int main(){
    scanf("%d", &n);
        for(i=0; i<n; i++){
            scanf("%d %d", &f1, &f2);
            while(f2){
                int resto = f1%f2;
                f1 = f2;
                f2 = resto;
            }
            printf("%d\n", f1);
        }
    return 0;
}


/*int main (){
    int loop = 0;
    
    scanf("%d", &loop);

    while(loop--){
        int n = 0;
        int d = 0;
        int r = 0;
    
        scanf("%d %d", &n, &d);

        while(d != 0){
            r = n%d;
            n = d;
            d = r;
        }
        printf("%d\n", n);
    }    
    return 0; 
}
*/




