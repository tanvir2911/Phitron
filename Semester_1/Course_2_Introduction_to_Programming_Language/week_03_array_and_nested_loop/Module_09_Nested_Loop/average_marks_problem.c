#include <stdio.h>

//find the average marks of the subjects of each students;


int main()
{
    int sub,students,i,j;
    float numbers,sum;
    printf("Enter the number of students and the number of subjects you wanna calculate: ");
    scanf("%d%d",&students,&sub);

    for(i=1;i<=students;i++)
    {
        printf("Enter the numbers of the subjects: ");
        for(j=1;j<=sub;j++)
        {
            scanf("%f",&numbers);
            sum+=numbers;
        }
        printf("Average: %f\n",sum/sub);
    }

    return 0;
}
