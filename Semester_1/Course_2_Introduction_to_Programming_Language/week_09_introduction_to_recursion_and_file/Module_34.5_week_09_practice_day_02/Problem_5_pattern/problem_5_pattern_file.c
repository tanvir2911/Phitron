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

    int n,spaces,end_spaces;
    fscanf(inputFile,"%d",&n);
    spaces=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=spaces;j++) fprintf(outputFile," ");
        for(int j=1;j<=n;j++) fprintf(outputFile,"#");
        for(int j=1;j<=end_spaces;j++) fprintf(outputFile," ");
        fprintf(outputFile,"\n");
        spaces--;
        end_spaces++;
    }

    return 0;
}
