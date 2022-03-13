#include<stdio.h>
void simple_interest(float,float,float)

int main()
{
    float a,b,c;
    printf("enter the value of principle : %f\n enter the value of rate : %f\n enter the value of time : %f\n",a,b,c);
    scanf("%f %f %f",&a,&b,&c);
    simple_interest(a,b,c);
}

void simple_interest(float x,float y,float z)
{
    printf("simple interest for given principle,rate and time is : %f\n",(x*y*z)/100);
}


