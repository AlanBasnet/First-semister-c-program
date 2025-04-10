#include<stdio.h>
int main()
{
    char op;
    int a,b,c;
    printf("enter the operator\n");
    scanf(" %c",&op);
    printf("enter the two number\n");
    scanf("%d%d",&a,&b);
    if (op == '+')
    {
        c=a+b;
    }
    else if (op == '-')
    {
        c=a-b;
    }
    else if (op == '*')
    {
        c= a*b;
    }
    else if (op == '/')
    {
        if(b==0)
        {
            printf("not possible to divide by zero");
            return 1;
        }
        else
        {
            c=a/b;
        }
    }
    else if (op == '%')
    {
        if(b==0)
        {
            printf("not possible to divide by zero");
            return 2;
        }
        else
        {
            c=a%b;
        }
    }
    else 
    {
        printf("Invalid operator.");
        return 3;
    }
    printf(" %d %c %d = %d",a,op,b,c);
    return 0;
}