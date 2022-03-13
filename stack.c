#include<stdio.h>
#include"stack.h"
// int push(char [],int *,char,int);
// char pop(char [],int *);
// char peep(char [],int *,int);
// char change(char [],int *,char,int);

void main()
    {
        int n=10;
        char s[n+1];
        int top=0;
        char x;
        int i;
        int op=0;
        while(op<5)
        {
            printf("enter a operation which you want to perform:\n");
            printf("1.push\n2.pop\n3.peep\n4.change\n5.quite\n");
            scanf("%d",&op);
            switch (op)
            {
            case 1:
                printf("enter an element to push: \n");
                scanf("\n%c",&x);
                op=push(s,&top,x,n);
                break;

            case 2:
                printf("poped character is: %c\n",pop(s,&top));
                break;
            
            case 3:
                printf("enter value of position: \n");
                scanf("%d",&i);
                printf("value at %d is:%c\n",i,peep(s,&top,i));
                break;

            case 4:
                printf("enter value of position and replace value: \n");
                scanf("%d %c",&i,&x);
                change(s,&top,x,i);
                break;

            default:
                printf("enter valid choice as a number for operations\n");
                break;
            }
            
        }
    }

// int push(char a[],int *t,char e,int n)
// {
//     if(*t>=n)
//     {
//         printf("stack overflow \n");
//         return 0;
//     }
//     else
//     {
//         *t=*t+1;
//         printf("top=%d\n",*t);
//         a[*t]=e;
//         return 1;
//     }
// }

// char pop(char a[],int *t)
// {
//     if(*t==0)
//     {
//         printf("stack underflow \n");
//         return 0;
//     }
//     else
//     {
//         printf("%c",a[*t+1]);
//         *t=*t-1;
//         printf("\ntop=%d\n",*t);
//         return a[*t+1];
//     }
// }

// char peep(char a[],int *t,int i)
// {
//     if((*t-i+1)<=0)
//     {
//         printf("stack underflow \n");
//         return 0;
//     }
//     else
//     {
//         return a[*t-i+1];
//     }
// }

// char change(char a[],int *t,char e,int i)
// {
//     if(*t-i+1<=0)
//     {
//         printf("stack underflow \n");
//         return 0;
//     }
//     else
//     {
//         a[*t-i+1]=e;
//         return 1;
//     }
// }