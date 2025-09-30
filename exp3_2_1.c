#include<stdio.h>

int main()
{
    int n, i, a[50], pos=0, neg=0, zero=0;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the %d element: ", i+1);
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]==0){
            zero++;
        }
        else if(a[i]>0){
            pos++;
        }
        else{
            neg++;
        }
    }

    printf("The number of postive elements are: %d\nThe number of negative elements are: %d\nThe number of zeros are: %d", pos, neg, zero);
}