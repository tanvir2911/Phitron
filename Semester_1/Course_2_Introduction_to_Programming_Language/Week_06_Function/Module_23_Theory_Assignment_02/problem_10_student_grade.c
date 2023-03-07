#include<stdio.h>

char grade_calculation(int x);

int main()
{
    int n;
    scanf("%d",&n);

    printf("Your Grade is %c\n",grade_calculation(n));

    return 0;
}

char grade_calculation(int x)
{
    if(x>=80 && x<=100)
        return 'A';
    else if(x>=60 && x<=79)
        return 'B';
    else if(x>=40 && x<=59)
        return 'C';
    else
        return 'F';
}
