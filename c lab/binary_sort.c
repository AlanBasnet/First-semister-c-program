#include<stdio.h>
int main()
{
    int a[10],i,n,j,temp,key,first ,last ,mid ;

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

 for(i=0;i<n;i++)
 {
    for(j=0;j<n-1;j++)
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

printf("\n Enter the element to be searched:\t");
scanf("%d",&key);
first = 0;
last = n-1;
while(first <= last )
{
    mid = (first +last )/2;
    if ( key == a[mid])
    {
        printf("\n The element %d is found in %dth position. \n ",key,mid+1);
    return 0 ;
    }
    else if  (key<= a[mid])
    {
        last = mid-1;
    }
    else
    {
        first = mid+1;
    }
}
printf("\n The element %d is not found in array \n",key);
return 1;
}