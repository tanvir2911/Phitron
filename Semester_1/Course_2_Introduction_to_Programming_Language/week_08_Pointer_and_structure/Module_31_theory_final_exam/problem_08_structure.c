#include<stdio.h>

struct Student
{
    double marks;
    int roll;
    char name[100];
};

struct Student *take_input(struct Student *std1)
{
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s",std1->name);
    printf("\nEnter roll number: ");
    scanf("%d",&std1->roll);
    printf("\nEnter marks: ");
    scanf("%lf",&std1->marks);
    printf("\n");
    return std1;
};

void print_output(struct Student *std1)
{
    printf("Displaying Information:\n");
    printf("Name: %s\n",std1->name);
    printf("Roll number: %d\n",std1->roll);
    printf("Marks: %.1lf\n",std1->marks);
}

int main()
{
    struct Student st1;
    struct Student *ptr;
    ptr = take_input(&st1);

    print_output(ptr);

    return 0;
}
