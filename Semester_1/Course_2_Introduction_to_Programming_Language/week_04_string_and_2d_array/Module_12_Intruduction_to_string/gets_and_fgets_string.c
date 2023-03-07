#include <stdio.h>
int main()
{
    char sen[1000];

    //gets(sen);

    fgets(sen,sizeof(sen),stdin);

    printf("%s",sen);

    return 0;
}
