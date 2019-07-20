#include<stdio.h>
int main()
{
    FILE *fpointer;
    fpointer = fopen("string file.txt", "w");
    char str[200];
    gets(str);
    fprintf(fpointer,"%s",str);
    fclose(fpointer);
    return 0;
}

