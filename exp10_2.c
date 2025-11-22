#include <stdio.h>
#include <stdlib.h>

struct node{
int a;
struct node* b;
};

int main (){
    struct node *first = NULL;
    struct node *sec = NULL;
    struct node *third = NULL;
    
    first=(struct node*) malloc (sizeof(struct node)); 
    sec=(struct node*) malloc (sizeof(struct node));
    third= (struct node*) malloc (sizeof(struct node));

    first ->a = 10;
    first ->b = sec;
    sec->a=20;
    sec->b=third;
    third->a=30;
    third->b=NULL;

    struct node *fourth= NULL;
    fourth=(struct node*) malloc (sizeof(struct node));
    fourth->a=40;
    fourth->b=third;
    sec->b=fourth;

    struct node *k=first;

    while (k!=NULL){
        printf("%d\n",k->a);
        k=k->b;
    }

    free (first); 
    free (sec); 
    free(third); 
    free(fourth);
    free(k); 
}