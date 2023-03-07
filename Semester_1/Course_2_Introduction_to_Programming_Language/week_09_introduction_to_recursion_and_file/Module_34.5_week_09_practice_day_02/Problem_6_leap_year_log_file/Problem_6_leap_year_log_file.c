#include<stdio.h>

int main()
{
    FILE * inputFile;
    inputFile = fopen("input.txt","r");
    if(inputFile==NULL)
    {
        printf("No File Found!");
        return 0;
    }
    FILE * outputFile;
    outputFile = fopen("output.txt","a");

    int n;
    fscanf(inputFile,"%d",&n);

    if(n%400==0 || (n%100!=0 && n%4==0)) fprintf(outputFile,"%d-->YES\n",n);
    else fprintf(outputFile,"%d-->NO\n",n);

    return 0;
}
