#include<stdio.h>
#include<math.h>
#define pi 3.141592653589793
int main()
{
    float d,x,nume,deno,sum=0,term;
    int i;
    printf("enter the degree \n");
    scanf("%f",&d);
    x=d*(pi/180);
    nume=x;
    deno=1;
    i=1;
    do
    {
     i +=2;
     term = nume /deno;
     sum +=  term ;
     nume *= x *x;
     deno *= i *(i-1);
    
    } while (fabs(term) > 0.000001);
    printf("The library function of sine(%f) is %f\n",d,sin(x));
    printf("Tee value of sine(%f) using taylor series is %f\n",d,sum);
    return 0;
}