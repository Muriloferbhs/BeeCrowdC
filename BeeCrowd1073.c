#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    
    int d = 1;
    while (d <= x){
        
        if(d % 2 == 0){
            int num = d * d;
            printf("%d^2 = %d\n", d, num);
        }
        d++;
    }
    return 0;
}
