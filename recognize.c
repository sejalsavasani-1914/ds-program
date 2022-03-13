#include<stdio.h>
#include<string.h>
#include"stack.h"

void main()
{
    int top,n=30,f=0,i=0;
    char ip[30],s[n+1];
    char b;
    //int temp=1;
    printf("enter the string:\n");
    scanf("%s",ip);
    int l=strlen(ip);
    //for(i=0;i<l;i++){
        while(ip[i]!='b')
        {
            push(s,&top,ip[i],n);
            i++;
        }
            //b=pop(s,&top);
            //temp=0;
            //break;
    //}
    while(top!=0)
    {
        b=pop(s,&top);
        i++;
    }
    if(i==l)
    {
       printf("%s string is valid according to grammar\n",ip); 
    }
    else{
        printf("%s string is not valid according to grammar\n",ip);
    }

    // while(top){
    //     if(ip[i]==)
    // }
    // while(ip[i]!='b')
    // {
    //     push(s,&top,s[i],n);
    //     i++;
    // }
    // while(s[i]!='\0')
    // {
    //     pop(s,&top);
    //     f++;
    // }
    //     if(i==f)
    //     {
    //         printf("%s string is valid according to grammar\n",s);
    //     }
    //     else
    //     {
    //         printf("%s string is not valid according to grammar\n",s);
    //     }
}

