#include<stdio.h>

int a=1;

void function2();

int main()
{
    int b=2;
    printf("MAIN() FUNTION: \n");
    printf("The global variable 'a' prints(Function 1): %d\n", a);
    printf("The value is printed as declared because the variable is a global variable\n");
    printf("The local variable 'b' prints: %d\n", b);
    printf("The value is printed as declared because it is a local variable within the main() function\n");
    function2();
}

void function2()
{
    int c=3;
    printf("FUNCTION2() FUNCTION: \n");
    printf("The global variable 'a' prints(Function 2): %d\n", a);
    printf("Again, the value is printed as declared because the variable is a global variable\n");
    printf("The local variable 'c' prints: %d\n", c);
    printf("The value is printed as declared because it is a local variable within the function2() funtion\n");
    printf("The value of the variable 'b' cannot be printed in the function2() because it is a local variable of a different function\n");
}