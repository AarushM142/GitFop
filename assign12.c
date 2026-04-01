/* lcm and gcd */
#include <stdio.h>

void main ()
{
    printf("Enter 2 numbers");
    int a,b;
    scanf("%d %d", &a, &b);

    int min = (a<b) ? a : b;
    int max = (a>b) ? a : b;
    int gcd=1;
    for (int i = min; i>1;i--)
    {
        if (max%i==0 && min%i == 0)
        {
            gcd = i;
            break;
        }
        
    }

    printf("%d is the greatest common divisor\n", gcd);

    printf("The least common multiple is %d\n", (max*min)/gcd);

}