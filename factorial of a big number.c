#include <stdio.h>
#include <math.h>
double solution(int);
int main(void)
{
    int n ;
    scanf("%d",&n);
    printf("%.0f\n",solution(n));
    return 0;
}
double solution(int n)
{
    double result;
    if(n == 0 || n == 1)
        return 1;
    else
        result = n*solution(n-1);
        return result;
}
