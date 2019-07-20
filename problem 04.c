//Roll : 170121 Name : Tahmid
#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,npr;
    printf("Enter the value of n & r : ");
    scanf("%d%d\n",&n,&r);
    if(n<r)  
    printf("invalid output");
    if(n>=0 && r<=15)
    {
    npr=fact(n)/fact(n-r);
    printf("The npr is %d",npr);
    }
    else 
        printf("invalid input");
    return 0;
}
       
int fact(int n)
{
    int i=1;
    while(n!=0)
    {
        i=i*n;
        n--;
    }
    return i;
}
