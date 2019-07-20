#include<stdio.h>
int main()
{
	int length=0;
    char str[20];
    gets(str);
    char *p;
    p=str;
    while(*p!='\0')
    {
        p=p+1;
        length++;
    }
    printf("The length of the string is %d",length);
    return 0;
}
