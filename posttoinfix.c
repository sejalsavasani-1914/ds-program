#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include"stack.h"

int operation(int,int,char);

int main()
{
    int n=30;
    char s[n+1],ip[20];
    char x,c;
    int a,b,i=0,top=0;
    printf("enter the expression:\n");
    scanf("%s",ip);
    int l=strlen(ip);
    for(i=0;i<l;i++)
    {
        if(isdigit(ip[i]))
        {
            push(s,&top,ip[i],n);
        }
        else
        {
            int b=(int)pop(s,&top)-'0';
            int a=(int)pop(s,&top)-'0';
            char c=(int)(operation(a,b,ip[i])+'0');
            push(s,&top,c,n);
        }
    }
    printf("answer is: %d\n",(int)pop(s,&top)-'0');
}

int operation(int a,int b,char c)
{
    switch(c)
    {
        case '+':
        return a+b;

        case '-':
        return a-b;

        case '*':
        return a*b;

        case '/':
        return a/b;
    }
}
