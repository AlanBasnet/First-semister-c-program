#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the number of terms \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
          printf(" ");  
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(j=i-1;j>0;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0 ;
}