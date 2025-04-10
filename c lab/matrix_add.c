#include<stdio.h>
int main()
{
int i,j,d[3][3];
int a[3][3],b[3][3],r,c;
printf("enter the rows and column os a matrix ");
scanf("%d%d",&r,&c);
printf("enter %d element is a matrix:\n",r*c);
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
}
printf("enter %d element is b matrix:\n",r*c);
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
      scanf("%d",&b[i][j]);
    }
}
printf("the addtion of matrix is :\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
     d[i][j]=a[i][j]+b[i][j];
     printf("%d\t",d[i][j]);
    }
    printf("\n");
}

return 0;
}