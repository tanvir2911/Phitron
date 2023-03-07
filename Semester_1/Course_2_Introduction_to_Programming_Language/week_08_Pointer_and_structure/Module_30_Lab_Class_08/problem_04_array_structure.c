#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    double marks;
};

void print_student(int n, struct Student s)
{
    printf("Information of Student %d\n",n+1);
    printf("%d\n",s.roll);
    printf("%s\n",s.name);
    printf("%.2lf\n",s.marks);
}

int main()
{
    struct Student cls[5];

    for(int i=0; i<5; i++)
    {
        scanf("%d",&cls[i].roll);
        scanf("%s",&cls[i].name);
        scanf("%lf",&cls[i].marks);
    }

    for(int i=0; i<5; i++)
    {
        if(cls[i].roll%2==0)
            print_student(i,cls[i]);
    }

    return 0;
}
