#include<stdio.h>
int main()
{
    char word[10000];

    fgets(word,sizeof(word),stdin);

    if(word[0]>=97)
    {
        word[0]-=32;
    }

    puts(word);

    return 0;
}
