#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c,D,r1,r2;
printf("enter three numbers \n");
scanf("%f%f%f",&a,&b,&c);
if (a==0)
{
    printf("THe value of a cannot be zero.");
}
else

{
    D= (b*b)-(4*a*c);
    if (D==0)
    {
        printf("The roots are real and equal.\n");
        r1=r2;
        r2=-b/2*a;
        printf("The value of r1 and r2 is %f and %f\n",r1,r2);
    }
    else if(D>0)
    {
        printf("The roots are real and distinct.\n");
        r1= -b +sqrt(D)/(2*a);
        r2= -b -sqrt(D)/(2*a);
        printf("The value of r1 and r2 is %f and %f",r1,r2);
    }
    else{
        printf("the roots are imaginary and distinct.\n");
        r1=-b/2*a;
        r2=sqrt(-D)/(2*a);
        printf("The real and imagimary number are %f and +i%f\n",r1,r2);
        printf("The real and imagimary number are %f and -i%f\n",r1,r2);
    }
}
return 0;
}