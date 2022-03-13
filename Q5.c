#include<stdio.h>

int main()
{
    int n,m,i;
    printf("enter the no. of terms in first polynomial: \n");
    scanf("%d",&n);
    int a[n];
    printf("highest degree will be %d\n enter coefficient:\n",n-1);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("first polynomial is:\n");
    for(i=0;i<n;i++)
    {
        printf("%dx^%d + ",a[i],i);
    }
    printf("\nenter the no. of terms in second polynomial: \n");
    scanf("%d",&m);
    int b[m],sum[n];
    printf("highest degree will be %d\n enter coefficient:\n",m-1);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("second polynomial is:\n");
    for(i=0;i<m;i++)
    {
        printf("%dx^%d + ",b[i],i);
    }
    for(i=0;i<(n<m ? n : m );i++)
    {
        sum[i]=a[i]+b[i];
    }
    for(int j=i;j< (n>m ? n : m );j++)
    {
        if(n>m)
        sum[j]=a[j];
        else
        sum[j]=b[j];
    }
    printf("\nthe addition of polynomial is:\n");
    for(i=0;i<(n>m ? n : m );i++)
    {
        printf("%dx^%d + ",sum[i],i);
    }
    return 0;
}