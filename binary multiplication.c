#include<stdio.h>
#include<math.h>
int bin(int dec);
int dec(int bin);

int main()
{
    int bin1,bin2,multiple;
    printf("Enter two binary number to multiple : \n");
    scanf("%d%d",&bin1,&bin2);
    multiple=dec(bin1)*dec(bin2);
    multiple=bin(multiple);
    printf("multiple = %d",multiple);
    return 0;
}

 int bin(int dec)
{
   int t, r = 0,bin=0,i=1;
   t=dec;
   while(t>0)
   {
        r=t%2;
        t=t/2;
        bin = bin + r*i;
        i=i*10;
   }
   return bin;
}

int dec(int bin)
{
    int dec=0,r,i=0,t,p,x;
    t=bin;
    p=bin;
    while(t!=0)
    {
        r=t%10;
        if(r>1)
        {
            printf("Error\n");
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
    return dec;
}



