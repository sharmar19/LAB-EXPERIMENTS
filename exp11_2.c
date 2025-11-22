#include <stdio.h>

int main (){ 
    int a = 10; int leftshift, rightshift;
    leftshift = a<<2;
    rightshift=a>>4;
    printf ("%d \n", leftshift);
    printf ("%d", rightshift);

}