#include <stdio.h>
#include<math.h>
int main()
{
    int oct ,dec=0 ,bin=0 ,t ,p, r ,s ,i=0 ,j=0 ,k=0 ,x;
    char hex[100];
    printf("Enter your octal number :\t");
    scanf("%d",&oct);
    t=oct;
    p=oct;
    while(t!=0)
    {
        r=t%10;
        if(r>=8)
        {
            printf("Error");
            return 0;
        }
        t=t/10;
    }
    while(p!=0)
    {
        r=p%10;
        x=pow(8,i);
        dec=dec+r*x;
        p=p/10;
        i++;
    }
    //printf("%d\n",dec);
    while(dec>0)
    {
        r=dec%16;
        if(r<10)
            hex[j]=48+r;
        else
            hex[j]=55+r;
        dec=dec/16;
        j++;
        k++;
    }
    for(j=k-1;j>=0;j--)
    {
        printf("%c",hex[j]);
    }
    return 0;
}


