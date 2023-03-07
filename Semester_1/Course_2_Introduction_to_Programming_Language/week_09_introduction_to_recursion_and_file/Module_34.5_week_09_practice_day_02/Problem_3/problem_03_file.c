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

    int n;
    fscanf(inputFile,"%d",&n);
    for(int i=1;i<=n;i++)
    {
        int x;
        fscanf(inputFile,"%d",&x);
        if(x>0)
            for(int j=x;j>=-x;j--) fprintf(outputFile,"%d ",j);
        else if(x<0)
            for(int j=x;j<=abs(x);j++) fprintf(outputFile,"%d ",j);
        else fprintf(outputFile,"%d ",0);
        fprintf(outputFile,"\n");
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
