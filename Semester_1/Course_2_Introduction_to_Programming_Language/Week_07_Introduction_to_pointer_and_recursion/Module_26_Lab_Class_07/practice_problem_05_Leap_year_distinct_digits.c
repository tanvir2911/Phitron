//Leap year
//Distinct digits

#include<stdio.h>

int is_leap(int x)
{
    if((x%400==0) || (x%4==0 && x%100!=0))
        return 1;
    else
        return 0;
}

int is_distinct(int y)
{
    int digit_counter[10] = {0,0,0,0,0,0,0,0,0,0};
    for(;y!=0;)
    {
        digit_counter[y%10]++;
        y/=10;
    }

    for(int i=0;i<10;i++)
    {
        if(digit_counter[i]>1)
            return 0;
    }
    return 1;
}

int main()
{
    int year;
    scanf("%d",&year);

    if(is_leap(year) && is_distinct(year))
        printf("Beautiful\n");
    else
        printf("Ugly\n");

    return 0;
}
