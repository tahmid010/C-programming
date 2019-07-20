#include<stdio.h>
int main()
{
    char str1[50],str2[50],i=0,j=0,length=0;
    char *p;
    printf("Enter first string : \n");
    gets(str1);
    printf("Enter second string : \n");
    gets(str2);
    while(str1[i]!='\0')
    {
        length++;
        i++;
    }
    p=&str1[i];
    i=0;
    while(str2[i]!='\0')
    {
        *p=str2[i];
        i++;
        p=p+1;
    }
    j=i;
    i=length+j;
    int k=0;
    printf("After concatenation : ");
    while(k<i)
    {
        printf("%c",str1[k]);
        k++;
    }
    return 0;
}
