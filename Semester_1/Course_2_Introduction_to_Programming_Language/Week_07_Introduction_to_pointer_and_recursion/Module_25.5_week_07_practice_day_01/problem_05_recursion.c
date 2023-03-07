#include<stdio.h>

int sum_of_first_n_natural_number(int x)
{
    if(x==1)
        return 1;
    else
        return x + sum_of_first_n_natural_number(x-1);
}

int main()
{
    int n;
    scanf("%d",&n);

    int sum = sum_of_first_n_natural_number(n);

    printf("%d\n",sum);

    return 0;
}
