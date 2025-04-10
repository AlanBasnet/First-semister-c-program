#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10]; // matrix 
   int m,n,p,q;                         // for order of matrix
    int i,j,k;                         // for loop
printf("Enter the order of matrix A : ");
scanf("%d%d",&m,&n);
printf("Enter the order of matrix B : ");
scanf("%d%d",&p,&q);
if (n!=p)
{
    printf("number of colum of A  is not equal to the number of row of B .");
    printf("So the matrix multiplication is not possible\n");
    return 1;
}
else 
{
    printf("Enter the %d element into the matrix A:\t",m*n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
  printf("The matrix A is: \n ");
   for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
   printf("Enter the %d element into the matrix B:\t",p*q);
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     printf("The matrix B is \n ");
   for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    //for multiplication
    printf("matrix after multiplication is :\n");
    for (i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    // printinf the multiplication
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
return 0;
}