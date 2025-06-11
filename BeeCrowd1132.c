#include <stdio.h>

int main()
{
    int menor, maior, x, y;
    
    scanf("%d", &x);
    scanf("%d", &y);
    
    if (x > y){
        maior = x;
        menor  = y;
    }
    if(y > x){
        menor = x;
        maior = y;
    }
    
    int cont = menor;
    int soma = 0;
    while (cont <= maior){
        if(cont % 13 != 0){
            soma = soma + cont;
            
        }
        cont ++;
    }
    printf("%d\n", soma);
    
    
    return 0;
}
