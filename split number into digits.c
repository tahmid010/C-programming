#include<stdio.h>
int main()
{
  int n,t,r=1;

  printf("Enter a number: ");
  scanf("%d",&n);

  t=n;
  while(t>0)
    {
        t=t/10;
        r = r*10;
    }

  printf("Each digits of given number are: ");
  while(r>1)
    {
        r = r/10;
        printf("%d ",n/r);
        n = n % r;
    }

  return 0;
}
