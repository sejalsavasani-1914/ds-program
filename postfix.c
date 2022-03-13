#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include"stack.h"

int operator(char);
int presedence(char);

void main()
{
    int m=1000,i=0,top=0,n,j;
    int stack[m];
    char x;
    char ip[100],op[100],s[300];
    printf("enter your input:\n");
    scanf("%s",ip);
    int l=strlen(ip);
    int k=0;
    for(i=0;i<l;i++){
        if(isdigit(ip[i]) || isalpha(ip[i]))
        {
            op[k]=ip[i];
            k++;
        }
        // else if(ip[i]=='(')
        // {
        //     op[k]=push(s,&top,ip[i],n);
        //     k++;
        // }
        // else if(ip[i]==')')
        // {
        //     if(top!='(')
        //     {
        //         op[k]=pop(s,&top);
        //         k++;
        //     }
        //     pop(s,&top);
        //     i++;
        // }
        else
        {
            while(top!=0 & presedence(peep(s,&top,top))>=presedence(ip[i]))
            {
                op[k]=pop(s,&top);
                k++;
                printf("debug");
            }
            push(s,&top,ip[i],n);
        }
        
    }
    while(top!=0)
            {
                op[k]=pop(s,&top);
                k++;
                //printf("debug");
            }
    // while(ip[i]!='\0')
    // {
    //     if(isdigit(ip[i]) || isalpha(ip[i]))
    //     {
    //         push(s,&top,ip[i],n);
    //         i++;
    //     }
    //     else if(operator(ip[i])==1)
    //     {
    //         x=pop(s,&top);
    //         while(operator(x)==1 & presedence(x)>=presedence(ip[i]))
    //         {
    //         presedence(x);
    //         ip[i]=stack[j];
    //         j++;
    //         stack[j]=pop(s,&top);
    //         }
    //         push(s,&top,x,n);
    //     }
        
    // }
    printf("postfix expression is: %s\n",op);
}


int operator(char p)
{
    if(p=='+' || p=='-' || p=='*' || p=='/' || p=='^')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int presedence(char p)
{
    switch(p)
        {
            case '+':
                return 1;
                break;

            case '-':
                return 1;
                break;

            case '*':
                return 2;
                break;

            case '/':
                return 2;
                break;

            case '^':
                return 3;
                break;

            // default:
            //     printf("not valid input\n");
            //     break;
        }
}


