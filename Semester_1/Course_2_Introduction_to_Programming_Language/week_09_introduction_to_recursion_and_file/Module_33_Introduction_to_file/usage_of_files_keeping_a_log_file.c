#include<stdio.h>
int main()
{
    FILE * logFile = fopen("log.txt","a");
    FILE * inputFile = fopen("habijabi.txt","r");
    if(inputFile==NULL)
    {
        fprintf(logFile, "Input file not found at 04:30 pm\n");
        return 0;
    }

    return 0;
}
