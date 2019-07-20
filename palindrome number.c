//6.  Palindrome Number

#include <stdio.h>

int main()
{
   int n, t, r = 0;

   printf("Enter a number to reverse\n");
   scanf("%d", &n);
   t=n;

   while (t > 0)
   {
      r = r * 10;
      r = r + t%10;
      t = t/10;
   }
    if(n==r)
        printf("The given number is palindrome");
    else
        printf("The given number is not palindrome");

   return 0;
}
