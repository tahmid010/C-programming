#include<stdio.h>
#include<math.h>
int main()
{
    int bin,oct=0,dec=0,r,i=0,j=1,t,p,x;
    printf("Enter your binary number :\t");
    scanf("%d",&bin);
    t=bin;
    p=bin;
    while(t!=0)
    {
        r=t%10;
        if(r>1)
        {
            printf("Error");
            return 0;
        }
        t=t/10;
    }
    while(p!=0)
    {
        r=p%10;
        x=pow(2,i);
        dec=dec+r*x;
        p=p/10;
        i++;
    }
    while(dec!=0)
    {
        r=dec%8;
        oct=oct+r*j;
        dec=dec/8;
        j=j*10;
    }
    printf("After conversion  Octal = %d",oct);
    return 0;
}
