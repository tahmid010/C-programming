#include <stdio.h>
#include<math.h>
int main()
{
    int oct ,dec=0 ,bin=0 ,t ,p, r ,s ,i=0 ,j=1 ,x;
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
            return ;
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
    while(dec!=0)
    {
        s=dec%2;
        bin=bin+s*j;
        dec=dec/2;
        j=j*10;
    }
    printf("After conversion  Binary = %d",bin);
    return 0;
}
