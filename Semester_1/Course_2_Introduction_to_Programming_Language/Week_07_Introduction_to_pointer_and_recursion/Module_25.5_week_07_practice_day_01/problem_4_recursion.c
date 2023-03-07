#include<stdio.h>

void print_1th_through_nth_descending_order(int x)
{
    if(x==1)
        printf("%d\n",x);
    else
    {
        printf("%d ",x);
        print_1th_through_nth_descending_order(x-1);
    }

}

int main()
{
    int n;
    scanf("%d",&n);

    print_1th_through_nth_descending_order(n);

    return 0;
}
