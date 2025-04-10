#include<stdio.h>
int main()
{
char src_f[20],tar_f[20],ch;
printf("Enter the input file name and target file name: \n");
scanf("%s %s",src_f,tar_f);
FILE *fp1,*fp2;
fp1= fopen(src_f,"r");
if(fp1==NULL)
{
    printf("Unable to open file %s in read mode\n",src_f);
    return 1;
}
fp2 =fopen(tar_f,"w");
if (fp2==NULL)
{
    printf("Unable to open file %s in write mode\n",tar_f);
    return 2;
}
while((ch= fgetc(fp1))!=EOF)
{
    fputc(ch,fp2);
}
printf("File copied successfully \n");
fclose(fp1);
fclose(fp2);
}