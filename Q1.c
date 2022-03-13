#include<stdio.h>
void main()
{
    int ba,i,c,arr_address;
    printf("enter the base address:\n");
    scanf("%d",&ba);
    printf("enter the index value:\n");
    scanf("%d",&i);
    printf("enter the size of one element:\n");
    scanf("%d",&c);
    arr_address=ba+c*(i-1);
    printf("address of the ith element of array is: %d\n",arr_address);
}