#include<stdio.h>

int main()
{
    int a[50], pos=0, neg=0, zero=0, even =0, odd=0, n, i;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the %d element: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]==0){
            zero++;
            continue;
        }

        if(a[i]%2==0)
            even++;

        if(a[i]%2!=0)
            odd++;

        if(a[i]>0)
            pos++;

        if(a[i]<0)
            neg++;
        
    }

    printf("The number of even numbers are: %d\n", even);
    printf("The number of odd numbers are: %d\n", odd);
    printf("The number of positive numbers are: %d\n", pos); 
    printf("The number of negative numbers are: %d\n", neg);
    printf("The number of zeros are: %d\n", zero);
}