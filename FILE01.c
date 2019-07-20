#include<stdio.h>
int main()
{
    FILE *fpointer;
    fpointer = fopen("My first file.txt", "w");
    fprintf(fpointer,"Hello World!");
    fclose(fpointer);
    return 0;
}
