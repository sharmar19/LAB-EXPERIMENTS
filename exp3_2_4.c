#include <stdio.h>

int main() {
    double population = 100000.0; 
    double rate = 0.10; 
    int years = 10; 

    printf("Year 0 (current): %.0f\n", population);
    
    for (int i = 1; i <= years; i++) {
        population = population / (1 + rate); 
        printf("Year %d: %.0f\n", i, population);
    }
    
    return 0;
}