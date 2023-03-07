#include<stdio.h>

int g = 7;

void add_two_nums()
{
    int a,b;
    int g = 13;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    printf("%d\n",sum);
    printf("Printing in add function: %d\n",g);
    g = g+2;
    printf("Printing in add function: %d\n",g);
    {
        extern int g;
        printf("Printing global g in add function: %d\n",g);
    }
}

int main()
{
    int mv = 7, g=21;

    add_two_nums();
    printf("Printing in main function: %d\n",g);

    return 0;
}
