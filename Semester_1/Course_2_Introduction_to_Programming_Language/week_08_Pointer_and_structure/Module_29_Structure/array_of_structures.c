#include<stdio.h>

struct Student{
    double weight;
    int roll;
};

int main()
{
    struct Student s[10];

    for(int i=0;i<10;i++)
    {
        s[i].roll = 11+i;
        s[i].weight = 55.9+i*3;
    }

    for(int i=0;i<10;i++)
    {
        printf("%d %lf\n",s[i].roll,s[i].weight);
    }

//    s[0].roll = 11;
//    s[0].weight = 55.9;
//
//    s[1].roll =16;
//    s[1].weight = 75.69;
//
//    s[2].roll = 19;
//    s[2].weight = 85.679;

    return 0;
}
