#include<stdio.h>
#include<math.h>
int main()
{
    int bin,dec=0,r,i=0,t,p,x;
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
    int j=0,k=0 ;
    char hex[100];
    while(dec>0)
    {
        r=dec%16;
        if(r<10)
            hex[k]=48+r;
        else
            hex[k]=55+r;
        dec=dec/16;
        k++;
        j++;
    }
    for(k=j-1;k>=0;k--)
    {
        printf("%c",hex[k]);
    }
    return 0;
}
