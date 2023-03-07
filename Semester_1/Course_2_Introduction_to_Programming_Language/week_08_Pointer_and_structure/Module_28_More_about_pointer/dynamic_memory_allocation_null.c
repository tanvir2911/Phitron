#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int* ptr;
    ptr = (int*) calloc(n, sizeof(int));

    if(ptr==NULL)
        printf("Memory Allocation Failed.\n");
    else
    {
        for(int i=0;i<n;i++)
        scanf("%d",(ptr+i));

    for(int i=0;i<n;i++)
        printf("%dth position --> %d\n",i,ptr[i]);
    }

    free(ptr);

    return 0;
}
