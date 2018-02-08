#include <stdio.h>
int main()
{
    int i=30;
    int k=40;
    printf("  i=%d k=%d before swapping\n", i, k);
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf(" i=%d k=%d after swapping\n", i, k);
    return 0;
}
