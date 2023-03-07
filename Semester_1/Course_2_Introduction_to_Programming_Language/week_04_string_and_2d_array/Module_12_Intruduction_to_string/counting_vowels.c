#include <stdio.h>
int main()
{
    char name[1000];
    fgets(name,sizeof(name),stdin);

    int i,counter=0;

    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]=='a' || name[i]=='A')
            counter++;
        else if(name[i]=='e' || name[i]=='E')
            counter++;
        else if(name[i]=='i' || name[i]=='I')
            counter++;
        else if(name[i]=='o' || name[i]=='O')
            counter++;
        else if(name[i]=='u' || name[i]=='U')
            counter++;
    }

    printf("The number of vowels is %d",counter);

    return 0;
}
