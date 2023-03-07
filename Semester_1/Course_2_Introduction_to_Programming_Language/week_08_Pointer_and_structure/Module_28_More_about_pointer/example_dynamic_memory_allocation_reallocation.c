#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    n=5;
    int* ptr;
    ptr = (int*) malloc(n*sizeof(int));
    printf("%p\n",ptr);
    if(ptr==NULL)
        printf("Memory Allocation Failed.\n");
    else
    {
        for(int i=0;i<n;i++)
            scanf("%d",(ptr+i));
        for(int i=0;i<n;i++)
            printf("%d ",*(ptr+i));
    }

    n=10;
    int* ptr2;
    ptr2 = realloc(ptr, n*sizeof(int));
    printf("%p\n",ptr2);
    if(ptr2==NULL)
        printf("Memory Allocation Failed.\n");
    else
    {
        for(int i=5;i<n;i++)
            scanf("%d",(ptr+i));
        for(int i=0;i<n;i++)
            printf("%d ",*(ptr+i));
    }

    free(ptr2);

    return 0;
}
