#include <stdio.h>

int main()
{
    int a;
    char c;

    printf("Enter a number expressed in percentage: ");
    scanf("%d%c", &a, &c);

    printf("The number value excluding percentage is %d", a);

    return 0;
}
