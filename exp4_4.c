#include<stdio.h>

void function()
{
    static int a=0;
    printf("The value of variable 'a' is: %d\n", a);
    a++;
}

int main()
{
    function();
    function();
    function();
    printf("As observed the variable 'a' retains its value even after various function calls\n");
}
