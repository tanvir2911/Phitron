#include <stdio.h>
int main()
{
    printf("Byte size of int is %d\n", sizeof(int));

    printf("Byte size of long int is %d\n", sizeof(long int));
    // the size of long int is 4 byte because once the size of int
    // was 2 byte and long int 4 byte now the size of int has been increased
    // but the the size of long int remains same.

    printf("Byte size of long long int is %d\n", sizeof(long long int));

    printf("Byte size of float is %d\n", sizeof(float));

    printf("Byte size of double is %d\n", sizeof(double));

    printf("Byte size of char is %d\n", sizeof(char));

    return 0;
}
