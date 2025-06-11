#include <stdio.h>

int main()
{

    float a, b, c;
    
    scanf("%f %f %f", &a, &b, &c);
    
    if(c < a + b && b < a + c && a < b + c){
        float per = a + b + c;
        
        printf("Perimetro = %.1f\n", per);
    }
    else{
        float area = ((a + b)* c)/2;
        
        printf("Area = %.1f\n", area);
    }

    return 0;
}
