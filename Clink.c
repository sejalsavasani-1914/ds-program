#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

void display(struct node *,struct node *);
struct node *insert(int ,struct node *,struct node *);
struct node *insertend(int ,struct node *,struct node *);
struct node *insort(int ,struct node *,struct node *);
struct node *delete(int ,struct node *,struct node *);

void main()
    {
        struct node *first,*second,*third,*last;
        first=(struct node *)malloc(sizeof(struct node));
        second=(struct node *)malloc(sizeof(struct node));
        third=(struct node *)malloc(sizeof(struct node));
        last=(struct node *)malloc(sizeof(struct node));
        first->info=2;
        first->link=second;
        second->info=3;
        second->link=third;
        third->info=4;
        third->link=last;

        display(first,last);
        printf("after adding new node at front:\n");
        first=insert(1,first,last);
        display(first,last);
        printf("\n");
        printf("after adding new node at end:\n");
        first=insertend(7,first,last);
        display(first,last);
        printf("\n");
        
        // printf("after adding new node inbetween:\n");
        // first=insort(5,first,last);
        // display(first,last);
        // printf("\n");
        // printf("after deleting a node:\n");
        // first=delete(3,first,last);
        // display(first,last);
        // printf("\n");
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

struct node *insert(int x,struct node *first,struct node *last)
{
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("memory overflow\n");
        return first;
    }
    else
    {
        new->info=x;
        if(first==NULL)
        {
            new->link=new;
            first=new;
            last=new;
            return new;
        }
        else
        {
            new->link=first;
            last->link=new;
            first=new;
        }
        return first;
    }
}

struct node *insertend(int x,struct node *first,struct node *last)
{
    struct node *new;
    //struct node *save;
    new=(struct node *)malloc(sizeof(struct node));
    //save=(struct node *)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("memory overflow\n");
        return first;
    }
    else
    {
        new->info=x;
        if(first==NULL)
        {
            new->link=new;
            new=first;
            new=last;
            return new;
        }
        else
        {
            new->link=first;
            last->link=new;
            new=last;
        }
        return first;
    }
}

// struct node *insort(int x,struct node *first,struct node *last)
// {
//     struct node *new;
//     struct node *save;
//     new=(struct node *)malloc(sizeof(struct node));
//     save=(struct node *)malloc(sizeof(struct node));
//     if(new==NULL)
//     {
//         printf("memory overflow\n");
//         return first;
//     }
//     else
//     {
//         new->info=x;
//         if(first==NULL)
//         {
//             new->link=new;
//             new=first;
//             new=last;
//             return new;
//         }
//         else
//         {
//             if(new->info<=first->info)
//             {
//                 new->link=first;
//                 last->link=new;
//                 first=new;
//                 return new;
//             }
//             else
//             {
//                 save=first;
//                 while(save!=last && new->info>=save->link->info)
//                 {
//                     save=save->link;
//                 }
//                 new->link=save->link;
//             }
//             save->link=new;
//             if(save==last)
//                 new=last;
//             return first;
//         }
//     }
// }

// struct node *delete(int x,struct node *first,struct node *last)
// {
//     struct node *new;
//     struct node *save;
//     struct node *pred;
//     //struct node *x;
//     new=(struct node *)malloc(sizeof(struct node));
//     save=(struct node *)malloc(sizeof(struct node));
//     pred=(struct node *)malloc(sizeof(struct node));
//     //x=(struct node *)malloc(sizeof(struct node));
//     if(first==NULL)
//     {
//         printf("no link found\n");
//         return first;
//     }
//     else
//     {
//         save=first;
//         //=save;
//         while(save!=last && save!=new->info)
//             {
//                 pred=save;
//                 save=save->link;
//             }
//         //x=save;
//         if(save!=new->info)
//         {
//             printf("node not found\n");
//             return first;
//         }
//         else
//         {
//             if(new->info==first)
//             {
//                 first=first->link;
//                 last->link=first;
//                 return new;
//             }
//             else if(new->info==last)
//             {
//                 last=pred;
//             }
//             else
//             {
//                 pred->link=new->link;
//             }
//             free(new->info);
            
//         }
//         return first;
//     }
// }