#include <stdio.h>

#define add(a,b) ((a) + (b))

#define subtract(a,b) ((a)-(b))

#define multiply(a,b) ((a)*(b))

int main() { 
    int a=4, b=10;
    printf ("The addition of two numbers is: %d.\nThe subtraction of two numbers is : %d.\nThe multiplication of two numbers: %d.\n", add(a,b), subtract(a,b), multiply(a,b));
}