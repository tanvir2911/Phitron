
#include<stdio.h>
int main()
{
    int matrix[3][3],row1,row2,row3,column1,column2,column3,diagonal1,diagonal2;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            scanf("%d",&matrix[i][j]);
    }


    row1=matrix[0][0]+matrix[0][1]+matrix[0][2];
    row2=matrix[1][0]+matrix[1][1]+matrix[1][2];
    row3=matrix[2][0]+matrix[2][1]+matrix[2][2];
    column1=matrix[0][0]+matrix[1][0]+matrix[2][0];
    column2=matrix[0][1]+matrix[1][1]+matrix[2][1];
    column3=matrix[0][2]+matrix[1][2]+matrix[2][2];
    diagonal1=matrix[0][0]+matrix[1][1]+matrix[2][2];
    diagonal2=matrix[0][2]+matrix[1][1]+matrix[2][0];

    if(row1==row2 && row2==row3 && row3==column1 && column1==column2 && column2==column3 && column3==diagonal1 && diagonal1==diagonal2)
        printf("YES");
    else
        printf("NO");
}

