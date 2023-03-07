#include<stdio.h>

int add_three_nums(int a, int b, int c);

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int ans = add_three_nums(a,b,0);

    printf("The summation is %d\n",ans);

    return 0;
}

int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}
