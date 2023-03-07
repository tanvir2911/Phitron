#include<stdio.h>

int main()
{
    int a,b;
    long long int c;
    int ara[9] = {1,2,3,4,5,6,7,8,9};
    long long int ara1[9] = {1,2,3,4,5,6,7,8,9};
    char ara2[9] = {1,2,3,4,5,6,7,8,9};
    a = 12;

    printf("%p\n",&a); // hexadecimal e thake.
    printf("%d\n",&a); // hexadecimal er decimal representation.
    printf("%p\n",&b);
    printf("%p\n",&c);

    printf("\n");
    printf("Interger data type: \n");
    for(int i=0;i<9;i++)
        printf("%p\n",&ara[i]);

    printf("\n");
    printf("Long Long interger data type: \n");
    for(int i=0;i<9;i++)
        printf("%p\n",&ara1[i]);

    printf("\n");
    printf("Character data type: \n");
    for(int i=0;i<9;i++)
        printf("%p\n",&ara2[i]);

    return 0;
}
