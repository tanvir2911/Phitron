#include<stdio.h>

struct Student{
    int roll;
    char name[50];
    int age;
    float weight;
};

int main()
{
    struct Student s1 = {.weight=75.6, .roll=12, .age=24, .name="Mozammel Tanvir"}; //designated initialization
    struct Student s2 = {21, "Mehedi Tonmoy", 25, 71.6};

    printf("Student 1 Info:\n");
    printf("%d\n%s\n%d\n%f\n",s1.roll,s1.name,s1.age,s1.weight);
    printf("Student 2 Info:\n");
    printf("%d\n%s\n%d\n%f\n",s2.roll,s2.name,s2.age,s2.weight);

    return 0;
}

