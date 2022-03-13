// #include<stdio.h>

// int main()
// {
//     int a[20],i,j,k,n;
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(a[i]==a[j])
//             {
//                 for(k=0;k<n-1;k++)
//                 {
//                     a[k]=a[k+1];
//                 }
//                 n--;
//                 j--;
//             }
//         }
//     }
//     printf("\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d\n",a[i]);
//     }
//     return 0;

// }

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
    int field;
    struct node *ptr;
};

void display(struct node *);
struct node *insert(int, struct node *);
struct node *insertend(int, struct node *);
struct node *insort(int, struct node *);
struct node *delete (int, struct node *);
int count(struct node *);
//void displaycopy(struct node *, struct node *);
int printlist(struct node *,struct node *);
struct node *copy(struct node *);

void main()
{
    struct node *first, *second, *third;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    first->info = 2;
    first->link = second;
    second->info = 3;
    second->link = third;
    third->info = 4;
    third->link = NULL;

    struct node *begin;
    begin = (struct node *)malloc(sizeof(struct node));
    begin->field == '\0';

    display(first);
    printf("after adding new node at front:\n");
    first = insert(1, first);
    display(first);
    printf("\n");
    printf("after adding new node at end:\n");
    first = insertend(7, first);
    display(first);
    printf("\n");
    printf("after adding new node inbetween:\n");
    first = insort(5, first);
    display(first);
    printf("\n");
    // printf("after deleting a node:\n");
    // first=delete(5,first);
    // display(first);
    printf("\n");
    printf("total node of link:\n%d\n", count(first));
    printf("\n");
    display(first);
    printf("after coping link is:\n");
    // begin = copy(first);
    // displaycopy(begin, first);
    printlist(first,begin);
    printf("\n");
}

void display(struct node *first)
{
    struct node *save;
    save = first;
    while (save != NULL)
    {
        printf("%d,", save->info);
        save = save->link;
    }
    printf("\n");
}

struct node *insert(int x, struct node *first)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("memory overflow\n");
        return first;
    }
    else
    {
        new->info = x;
        if (first == NULL)
        {
            new->link = NULL;
            return new;
        }
        else
        {
            new->link = first;
            return new;
        }
    }
};

struct node *insertend(int x, struct node *first)
{
    struct node *new;
    struct node *save;
    new = (struct node *)malloc(sizeof(struct node));
    save = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("memory overflow\n");
        return first;
    }
    else
    {
        new->info = x;
        if (first == NULL)
        {
            new->link = NULL;
            return new;
        }
        else
        {
            save = first;
            while (save->link != NULL)
            {
                save = save->link;
            }
            save->link = new;
            return first;
        }
    }
};

struct node *insort(int x, struct node *first)
{
    struct node *new;
    struct node *save;
    new = (struct node *)malloc(sizeof(struct node));
    save = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("memory overflow\n");
        return first;
    }
    else
    {
        new->info = x;
        if (first == NULL)
        {
            new->link = NULL;
            return new;
        }
        else
        {
            if (new->info <= first->info)
            {
                new->link = first;
                return new;
            }
            else
            {
                save = first;
                while (save->link != NULL && new->info >= save->link->info)
                {
                    save = save->link;
                }
                new->link = save->link;
            }
            save->link = new;
            return first;
        }
    }
}

// struct node *delete(char *x,struct node *first)
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
//         x=save->info;
//         while(save->link!=NULL && save->info!=x)
//             {
//                 pred=save;
//                 save=save->link;
//             }
//         //x=save;
//         if(save->info!=x)
//         {
//             printf("node not found\n");
//             return first;
//         }
//         else
//         {
//             if(*x==first->info)
//             {
//                 first=first->link;
//                 return new;
//             }
//             else
//             {
//                 pred->link=new->link;
//             }
//             //free(save);

//         }

//     }
//     free(*x);
//     return first;
// }

int count(struct node *first)
{
    int count = 1;
    struct node *save;
    save = (struct node *)malloc(sizeof(struct node));
    if (first == NULL)
    {
        printf("no link found\n");
        count = 0;
        return count;
    }
    else
    {
        save = first;
        while (save->link != NULL)
        {
            save = save->link;
            count = count + 1;
        }
    }
    return count;
}

// void displaycopy(struct node *begin,struct node *first)
// {
//     struct node *pred;
//     pred=begin;
//     while(pred!=NULL)
//     {
//         printf("%d,",pred->field);
//         pred=pred->ptr;
//     }
//     printf("\n");
// }
//

int printlist(struct node *first, struct node *begin);
{
    printf("original list:\n");
    display(first);
    printf("after coping list:\n");
    display(begin);
    return 0;
}

struct node *copy(struct node *first)
{
    struct node *new;
    struct node *save;
    struct node *pred;
    struct node *ptr;
    struct node *begin;
    new = (struct node *)malloc(sizeof(struct node));
    save = (struct node *)malloc(sizeof(struct node));
    pred = (struct node *)malloc(sizeof(struct node));
    ptr = (struct node *)malloc(sizeof(struct node));
    begin = (struct node *)malloc(sizeof(struct node));
    if (first == NULL)
    {
        printf("no link found\n");
        return NULL;
    }
    else if (new == NULL)
    {
        printf("memory overflow\n");
        return first;
    }
    else
    {
        new->field = first->info;
        begin = new;
    }
    // else
    // {
    save = first;
    while (save->link != NULL)
    {
        pred = new;
        save = save->link;
        if (new == NULL)
        {
            printf("memory overflow\n");
            return first;
        }
        else
        {
            new->field = save->info;
            pred->ptr = new;
        }
    }
    new->ptr = NULL;
    // return begin;
    //}
    return begin;
}
