#include <stdio.h>

int main()

{
    float Celcius, Farenhiet;
    
    printf("Enter temp in Celcius: ");
    
    scanf("%f", &Celcius);
    
    Farenhiet=((9.0/5.0)*Celcius) + 32;
    
    printf("The temp in farenhiet is %.2f", Farenhiet);
    
    return 0;

}