#include<stdio.h>
#include<ctype.h>
main()
{
    char str1[50],str2[50],str3[50],str4[50],i=0;
    printf("enter a string to convert into uppercase : \n");
    gets(str1);
    while(str1[i]!='\0')
    {
        str3[i]=toupper(str1[i]);
        i++;
    }
    puts(str3);

    i=0;

    printf("enter a string to convert into lowercase : \n");
    gets(str2);
    while(str2[i]!='\0')
    {
        str3[i]=tolower(str2[i]);
        i++;
    }
    puts(str3);
}
