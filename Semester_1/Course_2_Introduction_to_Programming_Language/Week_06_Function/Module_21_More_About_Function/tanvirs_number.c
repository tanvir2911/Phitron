#include<stdio.h>

//conditions
//1. '7' must be present
//2. digits summation must be more than 10
//3. last digit must be prime

int is_seven_present(int x);
int digit_sum(int x);
int is_last_digit_prime(int x);

int main()
{
    int n;
    scanf("%d",&n);

    int seven_present = is_seven_present(n);
    int sum_of_digits = digit_sum(n);
    int last_digit_prime = is_last_digit_prime(n);

    if(seven_present==1 && sum_of_digits>10 && last_digit_prime==1)
        printf("Tanvir's Number.\n");
    else
        printf("Not Tanvir's Number.\n");

    return 0;
}

int is_seven_present(int x)
{
    for(int i=0;x>0;i++)
    {
        int temp = x%10;
        x/=10;
        if(temp==7)
            return 1;
    }
    return 0;
}

int digit_sum(int x)
{
    int sum=0;
    for(int i=0;x>0;i++)
    {
        sum += (x%10);
        x/=10;
    }
    return sum;
}

int is_last_digit_prime(int x)
{
    int last_digit = x%10;
    if(last_digit==2 || last_digit==3 || last_digit==5 || last_digit==7)
        return 1;
    else
        return 0;
}
