#include <stdio.h>
int main()
{
    int n,i,j,q,solvs,total_solvs=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        solvs=0;
        for(j=0;j<3;j++)
        {
            scanf("%d",&q);
            solvs+=q;
        }
        if(solvs>=2)
        {
            total_solvs++;
        }
    }
    printf("%d",total_solvs);

    return 0;
}
