#include<stdio.h>
int main()
{
    char string[50];
    int c=0;
    printf("Enter the string : \n");
    gets(string);
    while (string[c] != '\0')
        {
            if (string[c] >= 'a' && string[c] <= 'z')
            {
                string[c] = string[c] - 32;
            }
            c++;
        }
    printf("%s",string);
    return 0;
}

