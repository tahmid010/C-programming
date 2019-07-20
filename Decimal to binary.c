#include <stdio.h>
int main()
{
   long long int dec,t, r = 0,bin=0,i=1;
   printf("Enter a decimal number to convert:\n");
   scanf("%lld", &dec);
   t=dec;
   while(t>0)
   {
        r=t%2;
        t=t/2;
        bin = bin + r*i;
        i=i*10;
   }
   printf("The binary number of %lld is %lld",dec,bin);
   return 0;
}

