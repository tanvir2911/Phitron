#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++)
        scanf("%d",&ara[i]);

    for(int i=0;i<n;i++)
        printf("%d ",*(ara+i));

    return 0;
}
