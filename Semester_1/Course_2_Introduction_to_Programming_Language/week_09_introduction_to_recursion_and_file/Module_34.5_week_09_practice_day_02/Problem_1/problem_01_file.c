#include<stdio.h>

int main()
{
    FILE * inputFile;
    inputFile = fopen("input.txt","r");
    if(inputFile==NULL)
    {
        printf("Input file not found!\n");
        return 0;
    }
    FILE * outputFile;
    outputFile = fopen("output.txt","w");

    for(;;)
    {
        char x = fgetc(inputFile);
        if(x==EOF)
        {
            break;
        }
        fputc(x,outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
