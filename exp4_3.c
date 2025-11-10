#include<stdio.h>

int main()
{
    int a=1;
    printf("The local variable 'a' prints: %d\n", a);
    printf("The value is printed as declared because it is a local variable within the main() function\n");
    {
        int b=2;
        printf("The local varible within curly braces 'b' prints: %d\n", b);
    }
    printf("The value of variable 'b' outside curly braces cannot be printed because the variable is declared within the curly braces\n");
    
}