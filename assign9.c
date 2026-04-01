#include <stdio.h>
void main ()
{
    int a, temp, sum=0;
    
    scanf("%d", &a);
    int b = a;
    
    while (a!=0)
    {
          temp = a%10;
          a=a/10;
          sum+= temp*temp*temp;
    }
    if (b == sum)
    {
        printf("its an armstrong number");
    }
    else {
        printf("its not an armstrong number");
    }
}