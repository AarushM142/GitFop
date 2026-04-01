#include <stdio.h>
int factorialz(int a)
{
    if (a<=1)
    {
        return 1;
    }
    return a * factorialz(a - 1);

}
void main()
{
    int a; int fact=1;
    printf("Enter the number whose factorial you want");
    scanf("%d", &a);

    for (int i = 2; i<=a;i++)
    {
        fact*=i;
    }   
    printf("factorial is %d", fact);
}