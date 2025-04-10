#include<stdio.h>
int main()
{
    int a[10],i,n,j,temp ;

printf("Enter n number of element: \t ");
scanf("%d",&n);
printf("Enter the element into the array: \t  ");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
printf("\nThe arary element before : \n");

for(i=0;i<n;i++)
{
 printf("%d\t",a[i]);
}

printf("\nThe arary element after sorting: \n");

// swapping 

 for(i=0;i<n-1;i++)
 {
    for(j=0;j<n-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
            temp = a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
 }

// printing after swaping 

for(i=0;i<n;i++)
{
 printf("%d\t",a[i]);
}
printf("\n");
return 0 ;
}