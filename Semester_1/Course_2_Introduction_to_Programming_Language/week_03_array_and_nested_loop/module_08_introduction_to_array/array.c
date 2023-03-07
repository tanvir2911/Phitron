#include <stdio.h>
int main()
{
    int ara[10];

    ara[0]=2666;
    ara[1]=556;
    ara[2]= ara[0]-ara[1];

    printf("%d\n",ara[0]);
    printf("%d\n",ara[1]);
    printf("%d\n",ara[2]);
    printf("%d\n",ara[3]);

    return 0;
}
