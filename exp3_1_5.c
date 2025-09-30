#include<stdio.h>

int main()

{
    int l1, l2, l3, b1, b2, b3, p1, p2, p3, high;

    printf("L1: ");
    scanf("%d", &l1);

    printf("B1: ");
    scanf("%d", &b1);

    printf("L2: ");
    scanf("%d", &l2);

    printf("B2: ");
    scanf("%d", &b2);

    printf("L3: ");
    scanf("%d", &l3);

    printf("B3: ");
    scanf("%d", &b3);

    p1= 2*(l1+b1);
    p2= 2*(l2+b2);
    p3= 2*(l3+b3);

    high= (p1>p2) ? (p1>p3 ? p1:p3):(p2>p3 ? p2:p3);

    printf("%d", high);

    return 0;
    
}