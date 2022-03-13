#include<stdio.h>
int main()
{
    int i,j,a,spa,lin;
    printf("enter the value of row and column:\n");
    scanf("%d %d",&i,&j);
    printf("enter the non zero entry:\n");
    scanf("%d",&a);
    spa=i*j;
    lin=3*a;
    if(spa>lin)
    {
        printf("linear representation is better\n");
    }
    else
    {
        printf("sparse representation is better\n");
    }
    return 0;
}
