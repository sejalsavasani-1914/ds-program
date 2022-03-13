#include<stdio.h>
void main()
{
    int ba,n,m,j,i,c,r_m,c_m,s;
    printf("enter the base address:\n");
    scanf("%d",&ba);
    printf("total number of rows:\n");
    scanf("%d",&n);
    printf("total number of columns:\n");
    scanf("%d",&m);
    printf("enter the index value for row and column:\n");
    scanf("%d %d",&i,&j);
    printf("enter the size of one element:\n");
    scanf("%d",&c);
    printf("if you want row major then press 1 or if you want column major then press 0: \n");
    scanf("%d",&s);
    if(s==1)
    {
        r_m=ba+c*(n*(j-1)+(i-1));
        printf("address of the (i,j)th element of array is: %d\n",r_m);
    }
    if(s==0)
    {
        c_m=ba+c*((j-1)+(i-1)*m);
        printf("address of the (i,j)th element of array is: %d\n",c_m);
    }
}