#include <stdio.h>
int main()
{
    int a,b,ans;
    scanf("%d%d",&a,&b);

    char c;
    getchar();
    c = getchar();


    if(c=='+')
        ans = a+b;
    else
        ans = a-b;

    printf("Ans = %d\n",ans);

    return 0;
}
