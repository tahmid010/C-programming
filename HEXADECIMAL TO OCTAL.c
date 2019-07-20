#include<stdio.h>
#include<math.h>
int main()
{
    char hexdigits[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    char hex[30];
    int c=0,i=0,j,dec=0,power=0,r,oct=0,k=1;
    printf("Enter a Hexadecimal Number : \n");
    scanf("%s",&hex);
    while(hex[i]!='\0')
    {
        c++;
        i++;
    }
    for(i=c-1;i>=0;i--)
    {
        for(j=0;j<16;j++)
        {
            if(hex[i]==hexdigits[j])
                dec=dec+j * pow(16,power);
        }
        power++;
    }
    printf("Decimal Number : %d\n", dec);
    while(dec!=0)
    {
        r=dec%8;
        oct=oct+r*k;
        dec=dec/8;
        k=k*10;
    }
    printf("After conversion  octal = %d",oct);
    return 0;
}

