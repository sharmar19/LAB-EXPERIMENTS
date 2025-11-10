#include<stdio.h>

int main()
{
    int a[100], i, n, num, freq=0;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    printf("Enter the array: \n");
    for(i=0;i<n;i++){
        printf("Enter the %d element: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the number you want to find the frequency of: ");
    scanf("%d", &num);

    for(i=0;i<n;i++){
        if(a[i]==num)
        freq++;
    }

    printf("The frequency of the element is: %d", freq);
}