#include <stdio.h>

int main (){
    FILE *f;
    char a;

    f = fopen("abc.txt", "r");
    if (f==NULL) {
        printf (" Not able to open");
        return 0;
    }

    while ((a = fgetc (f)) != EOF){
        printf ("%c",a);
    }
    
    fclose(f);
}