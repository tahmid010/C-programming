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
        //x=pow(2,i);
        dec=dec+r*pow(2,i);
        p=p/10;
        i++;
    }
    printf("After conversion  Decimal = %d",dec);
    return 0;
}
