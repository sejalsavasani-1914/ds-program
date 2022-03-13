#include<stdio.h>

char enqueue(char [],int *,int *,int,char);
char dequeue(char [],int *,int *);

void main()
{
    int n=10;
    char s[n+1];
    int front=0,rear=0;
    char x;
    int op=0;
    while(op<3)
    {
        printf("enter a operation which you want to perform:\n");
        printf("1.enqueue\n2.dequeue\n3.quite\n");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            printf("enter an element to enqueue: \n");
            scanf("\n%c",&x);
            op=enqueue(s,&front,&rear,n,x);
            break;

        case 2:
                printf("dequeued character is: %c\n",dequeue(s,&front,&rear));
                break;

        default:
                printf("enter valid choice as a number for operations\n");
                break;
        }
    }
}

char enqueue(char a[],int *f,int *r,int n,char y)
{
    if(*r>=n)
    {
        printf("queue is overflow\n");
        return 0;
    }
    else
    {
        a[*r]=y;
        if(*f==0)
        {
            *f==1;
        }
        return y;
    }
}

char dequeue(char a[],int *f,int *r)
{
    if(*f==0)
    {
        printf("queue is underflow\n");
        return 0;
    }
    else if(*f==*r)
    {
        *f==*r==0;
    }
    else
    {
        *f+=1;
        return a[*f];
    }
}