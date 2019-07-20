#include<stdio.h>
int main()
{
    int dec,oct=0,r,t,i=1;
    printf("Enter your decimal number :\t");
    scanf("%d",&dec);
    while(dec!=0)
    {
        r=dec%8;
        oct=oct+r*i;
        dec=dec/8;
        i=i*10;
    }
    printf("After conversion  octal = %d",oct);
    return 0;
}
