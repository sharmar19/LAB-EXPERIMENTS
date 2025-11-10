#include<stdio.h>

int a=1;

void function2();

int main()
{
    printf("The global variable 'a' prints(Function 1): %d\n", a);
    printf("The value is printed as declared because the variable is a global variable\n");
    function2();
}

void function2()
{
    printf("The global variable 'a+10' prints(Function 2): %d\n", a+10);
    printf("Again, the value is printed as declared because the variable is a global variable\n");
}