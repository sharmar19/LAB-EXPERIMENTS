#include<stdio.h>

int main()

{
    int a, b, c;

    printf("Enter the side A: ");
    scanf("%d", &a);

    printf("Enter side B: ");
    scanf("%d", &b);

    printf("Enter side C: ");
    scanf("%d", &c);

    if (((a+b)>c) && ((b+c)>a) && ((c+a)>b))
    {
        if ((a==b) && (a==c) && (b==c)){
            printf("The triangle is equilateral.");
        }
        
        else if ((a==b) || (a==c) || (b==c)){
            printf("The triangle is isosceles.");
        }

        else if ((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a)){
            printf("The triangle is right angled.");
        }

        else {
            printf("The triangle is scalene.");
        }

    }

    else {
        printf("Not a triangle.");
    }

    return 0;
}