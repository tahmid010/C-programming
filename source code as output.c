#include <stdio.h>
int main() {
    FILE *fptr;
    char c;
    fptr = fopen(__FILE__,"r");
   while(c != EOF)
   {
         c = getc(fptr);
         putchar(c);
    }
    fclose(fptr);
    return 0;
}
