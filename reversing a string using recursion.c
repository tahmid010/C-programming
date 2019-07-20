#include<stdio.h>
void reverse(char *str)
{
   if (*str)
   {
       reverse(str+1);
       printf("%c", *str);
   }
}
 int main()
{
   char a[50];
   gets(a);
   reverse(a);
   return 0;
}
