#include<stdio.h>

int sum_calc(int x)
{
    int sum=0, plus_or_minus=1;
    for(int i=1;i<=x;i++)
    {
        if(plus_or_minus<=3)
        {
            sum+=i;
            plus_or_minus++;
        }
        else if(plus_or_minus>3 && plus_or_minus<=6)
        {
            sum-=i;
            plus_or_minus++;
            if(plus_or_minus>6)
                plus_or_minus=1;
        }
    }

    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);

    printf("%d\n",sum_calc(n));

    return 0;
}
