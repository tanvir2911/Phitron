#include <stdio.h>

int main()
{
    char st[100];
    scanf("%s",&st);

    for(int i=0;st[i]!='\0';i++)
    {
        if(st[i]>='A' && st[i]<='Z')
            st[i]+=32;
        else if(st[i]>='a' && st[i]<='z')
            st[i]-=32;
    }

    puts(st);

    return 0;
}
