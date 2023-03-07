#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s;

    s= (n/5) + (n%5!=0);

    printf("%d",s);

    return 0;
}
