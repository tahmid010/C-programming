#include<stdio.h>
int main()
{
    char str1[20],str2[20],str[20];
    printf("Enter str1:");
    gets(str1);
    printf("Enter str2:");
    gets(str2);
    printf("Before swapping:");
    printf("str1=%s\n str2=%s\n\n",str1,str2);
    int i=0,j=0;
    while(str1[i]!='\0')
    {
        str[j]=str1[i];
        i++;j++;
    }
    str[j]='\0';
    i=0,j=0;
     while(str2[i]!='\0')
    {
        str1[j]=str2[i];
        i++;j++;
    }
    str[j]='\0';
    i=0,j=0;
     while(str[i]!='\0')
    {
        str2[j]=str[i];
        i++;j++;
    }
     printf("After swapping:");
    printf("str1=%s\n str2=%s\n",str1,str2);
    return 0;
}
