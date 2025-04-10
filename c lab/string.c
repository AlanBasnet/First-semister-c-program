#include<stdio.h>
int str_length(char[]);
int str_compare(char[],char[]);
void str_concat(char[],char[]);
int main()
{
char str[40];
char str1[40],str2[40];

int choice,result;
 
 //  making menu for user ease

printf("\nMENU\n\n ");
printf(" Press 1. for string length \n");
printf("Press 2. for conatenate string\n");
printf(" Press 3. for string compare \n");
printf("Press 4. for exit\n\n");

printf("Enter your choice : \t ");
scanf("%d",&choice);

 // using switch case for 1 2 3 4 conditon
switch (choice)
{
    case 1:
    {
        printf("\n Enter a string : ");
        scanf("%s",str);
        result=str_length(str);
        printf("The length of the %s is %d\n",str,result);
        break;
    }

    case 2:
    {
        printf("Enter two string for string concatination: \t");
        scanf("%s %s",str1,str2);
        str_concat(str1,str2);
        printf("the string after concatination is %s\n",str1);
        break;
    }

    case 3:
    {
        printf("Enter two string for string compare \t");
        scanf("%s %s",str1,str2);
        result= str_compare(str1,str2);
        if(result>0)
        {
            printf("String %s is greater then string %s \n",str1,str2);
        }
        else if (result==0)
        {
            printf("String %s is equal to string %s.",str1,str2);
        }
        else
        {
            printf("String %s is less than string  %s ",str1,str2);
        }
        break;
    }
    case 4:
    {
        return 0;
    }
    default :
    {
        printf("Invalid choice.");
    }   
}
}

// calling function for calculation  

    // for length calculation 
    int str_length(char s[]) 
    {
        int i;
        for(i=0;s[i]!='\0';i++)
        {}
        return i;
    }

    // for string compare
    int str_compare(char s1[],char s2[])
    {
        int i;
        for(i=0;s1[i]!='\0'&& s2[i]!='\0';i++)
        {
            if(s1[i]!=s2[i])
            { 
            return (s1[i]-s2[i]);
            }
        }
        return (s1[i]-s2[i]);
    }
    
   // for concatinating string
   void str_concat(char s1[],char s2[])
   {
   int i,j;
   for(i=0;s1[i]!='\0';i++);
   
    for(j=0;s2[j]!='\0';j++)
    {
        s1[i+j]=s2[j];
    }
    s1[i+j]='\0';
    
   }

