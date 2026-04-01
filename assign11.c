#include <stdio.h>
#include <math.h>

double square_root(int x)
{
    if (x < 0)
    {
        printf("Sqrt not defined\n");
        return 0;
    }
    return sqrt(x);
}

int square(int x)
{
    return (x * x);
}
int cube(int x)
{
    return (x * x * x);
}
int prime_checker(int x)
{
    if (x>=2)
    {

        int i = x-1;

        while (i>1)
        {
            if (x%i==0)
            {
                return 0;
            }
            i--;
            

        }
        return 1;

    }
    
    else 
    {
        return 0;

    }
}
 
int factorial(int x)
{
    if (x < 0)
    {
        printf("Factorial not defined\n");
        return 0;
    }

    int fact = 1;
    for (int i = 1; i<=x; i++)
    {
        fact*=i;
    }
    return fact;
}

int prime_factors(int x)
{
    for (int i = 2; i<=x;i++)
    {
        if (x%i==0)
        {
            int prime_check = 1;

            for (int j = 2; j<=(i/2);j++)
            {
                if (i%j ==0)
                {
                    prime_check = 0;
                    break;
                }
            }
            if (prime_check == 1)
            {
                printf("%d ", i);
            }
            
        }
    }
    return 0;

}

int main()
{
    int choice;
        printf("---Menu---");
        printf("Enter 1 for Square root \n");
        printf("Enter 2 for Square \n");
        printf("Enter 3 for Cube \n");
        printf("Enter 4 for Prime Checker \n");
        printf("Enter 5 for factorial \n");
        printf("Enter 6 for prime factors \n");
        scanf("%d", &choice);
        printf("Now enter the number you want to perform the task on");
        int x;
        scanf("%d", &x);

        switch (choice)
        {
            case 1:
                printf("Square root: %lf\n", square_root(x));
                break;
            case 2:
                printf("Square: %d\n", square(x));
                break;
            case 3:
                printf("Cube: %d\n", cube(x));
                break;
            case 4:
                if (prime_checker(x))
                    printf("Prime\n");
                else
                    printf("Not Prime\n");

                break;
            case 5:
                printf("Factorial is: %d", factorial(x));
                break;
            case 6:
                printf("Prime factors are: ");
                prime_factors(x);
                printf("\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    return 0;
}

/*  gcc assign11.c -o assign11 -lm./assign11   */