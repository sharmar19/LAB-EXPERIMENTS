#include <stdio.h>

int main () { 
    int a = 10; int b= 20; int and, or, not,

    and = a & b; or = a|b; not = ~a;

    printf ("Bitwise AND: %d\n", and); 
    printf ("Bitwise OR: %d\n", or);
    print ("Bitwise NOT: %d\n", not); 
    return 0;
}

