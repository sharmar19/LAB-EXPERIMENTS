#include<stdio.h>

int main(){
    FILE *f;
    char a[100]; 

    f=fopen("abc.txt", "w");

    if (f == NULL){
        printf ("Not able to open"),
        return 0; 
    }

    fgets (a,sizeof(a), stdin);
    fputs(a,f);
    fclose (f);
}