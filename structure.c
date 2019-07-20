#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    struct ss
    {
        int roll;
        char name[25];
        int marks;
        char grade[3];
        float gp;
    };
    struct ss student[n];
    for(i=1;i<=n;i++)
    {
        printf("Enter roll , name & marks of student%d\n",i);
        scanf("%d  %s  %d",&student[i].roll,student[i].name,&student[i].marks);
    }
    printf("roll \tname \tmarks\n");
    for(i=1;i<=n;i++)
    {
        printf("%d \t%s \t%d",student[i].roll,student[i].name,student[i].marks);
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        if(student[i].marks>=80){
            student[i].grade[0]='A';
            student[i].grade[1]='+';
            student[i].grade[2]='\0';
            student[i].gp=4.00;
        }
        else if(student[i].marks>=75 && student[i].marks<=79){
            student[i].grade[0]='A';
            student[i].gp=3.75;
        }
        else if(student[i].marks>=70 && student[i].marks<=74){
            student[i].grade[0]='A';
            student[i].grade[1]='\0';
            student[i].gp=3.50;
        }
        else if(student[i].marks>=65 && student[i].marks<=69){
            student[i].grade[0]='B';
            student[i].grade[1]='+';
            student[i].grade[2]='\0';
            student[i].gp=3.25;
        }
        else if(student[i].marks>=60 && student[i].marks<=64){
            student[i].grade[0]='B';
            student[i].grade[1]='\0';
            student[i].gp=3.00;
        }
        else if(student[i].marks>=55 && student[i].marks<=59){
            student[i].grade[0]='B','-';
            student[i].gp=2.75;
        }
        else if(student[i].marks>=50 && student[i].marks<=54){
            student[i].grade[0]='C','+';
            student[i].gp=2.50;
        }
        else if(student[i].marks>=45 && student[i].marks<=49){
            student[i].grade[0]='C';
            student[i].gp=2.25;
        }
        else if(student[i].marks>=40 && student[i].marks<=44){
            student[i].grade[0]='D';
            student[i].gp=2.00;
        }
        else
        {
            student[i].grade[0]='F';
            student[i].gp=0.00;
        }
    }
    printf("roll \tname \tL.G \tG.P\n");
    for(i=1;i<=n;i++)
    {
        printf("%d \t%s \t%s \t%.2f",student[i].roll,student[i].name,student[i].grade,student[i].gp);
        printf("\n");
    }
    return 0;
}
