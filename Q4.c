#include<stdio.h>
void debug(int n){
    //printf("DEBUG %d\n",n);
}
int main()
{
    int n,m;
    printf("enter value of row and column:\n");
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n][m];
    debug(1);
    for(int i=0;i<n;i++)
    {
        debug(2);
        for(int j=0;j<m;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            debug(3);
        }
    }
    printf("matrix is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]!=0)
            {
                printf("\n%d\t%d\t%d\n",i+1,j+1,a[i][j]);
            }
        }
        
    }
    return 0;
}