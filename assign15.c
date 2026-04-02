#include <stdio.h>
#include <stdlib.h>

void main()
{
    int seed;
    printf("Enter a seed number : ");
    scanf("%d",&seed);
    srand(seed);
    printf("The random number generated is %d\n",rand());
}