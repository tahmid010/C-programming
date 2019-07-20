#include<stdio.h>
int main()
{
    int dec,i=0,j=0,r;
    char hex[100];
    printf("Enter a decimal number : \n");
    scanf("%d",&dec);
    while(dec>0)
    {
        r=dec%16;
        if(r<10)
            hex[i]=48+r;
        else
            hex[i]=55+r;
        dec=dec/16;
        i++;
        j++;
    }
    for(i=j-1;i>=0;i--)
    {
        printf("%c",hex[i]);
    }
    return 0;
}
