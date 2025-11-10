#include<stdio.h>
int fact(int a);
int main()
{
    int n, r;
    float combination;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    combination=fact(n)/(fact(r)*fact(n-r));
    printf("%.2f", combination);
    return 0;
}
int fact(int a){
    if(a==0){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}