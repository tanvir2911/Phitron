#include<stdio.h>
int main()
{
    int i,j, mat1[2][2],mat2[2][2];

    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d",&mat1[i][j]);

    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d",&mat2[i][j]);

    printf("Addition: \n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            printf("%d ",mat1[i][j]+mat2[i][j]);
        printf("\n");
    }

    printf("Subtraction: \n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            printf("%d ",mat1[i][j]-mat2[i][j]);
        printf("\n");
    }


    return 0;
}
