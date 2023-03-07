#include<stdio.h>
#include<string.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n+1;i++)
    {
        char words[105];

        fgets(words,sizeof(words),stdin);

        int l = strlen(words)-1;

        if(l>10)
        {
            printf("%c%d%c\n",words[0],l-2,words[l-1]);
        }
        else
            puts(words);
    }

    return 0;
}
