#include<stdio.h>
int main()
{
    FILE * inputFile = fopen("input600.txt", "r");
    if(inputFile==NULL)
    {
        printf("Input file not found\n");
        return 0;
    }
    FILE * outputFile = fopen("output600.txt", "w");

    int n;
    fscanf(inputFile, "%d",&n);
    fprintf(outputFile,"%d\n",n);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
