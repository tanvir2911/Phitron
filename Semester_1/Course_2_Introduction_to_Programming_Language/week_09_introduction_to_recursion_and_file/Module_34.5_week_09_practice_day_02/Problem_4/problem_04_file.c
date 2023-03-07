#include<stdio.h>

int main()
{
    FILE * inputFile;
    inputFile = fopen("input.txt","r");
    if(inputFile==NULL)
    {
        printf("No File Found!\n");
        return 0;
    }
    FILE * outputFile;
    outputFile = fopen("output.txt","w");

    int n,sum=0;
    fscanf(inputFile,"%d",&n);
    for(int i=1;i<=n;i++)
    {
        int x;
        fscanf(inputFile,"%d",&x);
        sum+=(x%10);
    }
    fprintf(outputFile,"Sum = %d",sum);

    return 0;
}
