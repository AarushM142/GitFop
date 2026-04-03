#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    srand(time(0));
    printf("The random number generated is %d\n",rand());
}