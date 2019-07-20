#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    int marks;
};
int main()
{
  // int n;
   //scanf("%d",&n);
    struct student s[10];
    int i,n;
    printf("enter the students number:\n");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        s[i].roll=i+1;
        printf("\n for roll number:\t%d\n",s[i].roll);
        printf("enter name:\n");
        scanf("%s",s[i].name);
        printf("enter marks:\n");
        scanf("%d",&s[i].marks);
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",s[i].roll);
        printf("%s\t",s[i].name);
        if(s[i].marks>=80)
            printf("LG: A+  GP: 4.00\n");
           else if(s[i].marks>=75)
            printf("LG: A  GP: 3.75\n");
            else if(s[i].marks>=70)
            printf("LG: A-  GP: 3.50\n");
            else if(s[i].marks>=65)
            printf("LG: B+  GP: 3.25\n");
            else if(s[i].marks>=60)
            printf("LG: B  GP: 3.00\n");
            else if(s[i].marks>=55)
            printf("LG: B-  GP: 2.75\n");
            else if(s[i].marks>=50)
            printf("LG: C+  GP: 2.50\n");
            else if(s[i].marks>=45)
            printf("LG: C  GP: 2.25\n");
            else if(s[i].marks>=40)
            printf("LG: D  GP: 2.00\n");
            else
            printf("LG: F  GP: 0.00\n");

    }
    return 0;
}
