#include<stdio.h>


int main()
{
    int mat[3][3], mat_transpose[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&mat[i][j]);

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            mat_transpose[j][i]= mat[i][j];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",mat_transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
