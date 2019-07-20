#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b || b==c || c==a)
    printf("two number is equal");
    if(b>a && a>c || a>b && c>a)
    printf("a is the middle number %d\n",a);
      if(a>b && b>c || a<b && c>b)
    printf("b is the middle number %d\n",b);
      if(b>c && a<c || c>b && c<a)
    printf("c is the middle number %d\n",c);
    return 0;
}
