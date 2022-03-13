#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"stack.h"

void main()
{
    int f=0,top=0,i,n=10;
    char s[n+1],a[30];
    char c;

    printf("enter the string:\n");
    scanf("%s",a);
    int m=strlen(a)/2;
    int l=strlen(a);
    for(i=0;i<m;i++)
    {
        push(s,&top,a[i],n);
    }
    if(l%2!=0)
    i++;
    while(a[i]!='\0'){
        char temp=pop(s,&top);
        if(temp!=a[i]){
            printf("%s string is not palindrome\n",s);
            exit(0);
        }
        i++;
    }
    printf("%s string is palindrome\n",s);
    //printf("\n%c",s[0]);
    //printf("%ld",strlen(a));
    // while(1)
    // {
    // for(int i=0;i<strlen(a)/2;i++)
    // {
    //     if(a[i]!='\0' & a[i]!=c)
    //     {
    //     push(s,&top,a[i],n);
    //     }
    // }
    // for(int i=0;i>(strlen(a)/2)+1;i++)
    // {
    //     if(a[i]!='\0')
    //     {
    //         pop(s,&top);
    //         f++;
    //     }
    // }
    // }
    //     if((strlen(a)/2)==f)
    //     {
    //         printf("%s is palindrome\n",s);
    //     }
    //     else
    //     {
    //         printf("%s string is not palindrome\n",s);
    //     }
}

