#include <stdio.h>

int main(){
    FILE *f;
    char a[100];
    
    f = fopen("abc.txt", "r");
    if (f==NULL){
        printf ("Not able to open"); 
        return 0;
    }

    while(fgets(a,sizeof(a), f) != NULL){
        printf("%S", a);
    }

    fclose (f);
}