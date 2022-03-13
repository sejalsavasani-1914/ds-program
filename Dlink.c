#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *lptr;
    struct node *rptr;

};

void main()
    {
        struct node *first,*second,*third,*last;
        first=(struct node *)malloc(sizeof(struct node));
        second=(struct node *)malloc(sizeof(struct node));
        third=(struct node *)malloc(sizeof(struct node));
        last=(struct node *)malloc(sizeof(struct node));
        first->lptr=NULL;
        first->info=2;
        first->rptr=second;
        second->lptr=first;
        second->info=3;
        second->rptr=third;
        third->lptr=second;
        third->info=4;
        third->rptr=NULL;


    }

void display(struct node *first,struct node *last)
{
    struct node *save;
    save=first;
    while(save!=last)
    {
        printf("%d,",save->info);
        save=save->link;
    }
    printf("\n");
    
}