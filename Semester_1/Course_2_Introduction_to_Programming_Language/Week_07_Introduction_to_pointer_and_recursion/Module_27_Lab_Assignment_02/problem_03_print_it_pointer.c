#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int *ptrX, *ptrY;
    ptrX = &a;
    ptrY = &b;

    printf("%d %d\n",*ptrX,*ptrY);

    return 0;
}
