#include<stdio.h>
 
int main()

{
    int x1, x2, x3, y1, y2, y3, s1, s2;

    printf("x1: ");
    scanf("%d", &x1);

    printf("y1: ");
    scanf("%d", &y1);

    printf("x2: ");
    scanf("%d", &x2);

    printf("y2: ");
    scanf("%d", &y2);

    printf("x3: ");
    scanf("%d", &x3);

    printf("y3: ");
    scanf("%d", &y3);

   

    if(((y2-y1)*(x3-x1)) == ((y3-y1)*(x2-x1))){
        printf("The numbers are collinear");
    }
    else{
        printf("The numbers are not collinear");
    }
    
    return 0;

}