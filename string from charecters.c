#include <stdio.h>
int main ()
{
	int n,i;
	char ch;
	printf("How many characters?\n");
	scanf("%d",&n);
	printf("input %d character\n",(n-1));
	char str[n+1];
	str[n]='\0';
	for(i=0;i<n;i++)
	{
        ch=getchar();
		str[i]=ch;
	}
	printf("The string is : ");
    puts(str);
    return 0 ;
}
