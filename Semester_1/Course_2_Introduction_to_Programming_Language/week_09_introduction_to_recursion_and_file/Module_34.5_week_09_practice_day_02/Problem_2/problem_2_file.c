#include<stdio.h>

int main()
{
    FILE * inputFile;
    inputFile = fopen("input.txt", "r");
    if(inputFile==NULL)
    {
        printf("No File Found\n");
        return 0;
    }
    FILE * outputFile;
    outputFile = fopen("output.txt","w");

    int n;
    fscanf(inputFile,"%d",&n);
    for(int i=1;i<=n;i++)
        fprintf(outputFile,"%d ",i);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
