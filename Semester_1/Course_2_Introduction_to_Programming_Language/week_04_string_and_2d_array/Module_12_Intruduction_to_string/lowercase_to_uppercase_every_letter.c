#include<stdio.h>
int main()
{
    char sentence[1000],i;
    fgets(sentence,sizeof(sentence),stdin);

    for(i=0;sentence[i]!='\0';i++)
    {
        if(sentence[i]>=97 && sentence[i]<123)
        {
            sentence[i]-=32;
        }
    }

    printf("%s",sentence);

    return 0;
}
