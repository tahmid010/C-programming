#include<stdio.h>

int main()
{
    char s[15]={'m','a','d','a','f','a','k','a','r','b','i','j','o','n','\0'};

    int i=0;

    while(s[i]!='\0')
    {
      i++;
    }
    printf("\n%d",i);

    return 0;
}
