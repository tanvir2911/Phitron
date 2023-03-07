#include<stdio.h>

void matrix_input(int* mat,int x,int y)
{
    for(int i=0; i<x; i++)
        for(int j=0; j<y; j++)
            scanf("%d",(mat+i*y+j));

}

void summation(int *mat1, int *mat2,int x, int y)
{
    printf("\n");
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
            printf("%d ",*(mat1+i*y+j) + *(mat2+i*y+j));
        printf("\n");
    }
}

int main()
{
    int m1,m2;
    scanf("%d %d",&m1,&m2);
    int mat1[m1][m2];
    int mat2[m1][m2];

    matrix_input(mat1,m1,m2);
    matrix_input(mat2,m1,m2);

    summation(mat1,mat2,m1,m2);

    return 0;
}
