#include<stdio.h>

void func(int x, int y, int* p, int* q)
{
    if(x>y)
    {
        *p = x;
        *q = y;
    }
    else if(x<y)
    {
        *q = x;
        *p = y;
    }
}

int main()
{
    int a=10, b=12;
    int max,min;

    func(a,b,&max,&min);

    printf("max: %d, Min: %d\n",max,min);

    return 0;
}
