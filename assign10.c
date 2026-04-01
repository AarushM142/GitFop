#include <stdio.h>
#include <math.h>

void main()
{
    int choice,a,b;
    printf("----Menu----");
    printf("Enter 1 for addition");
    printf("Enter 2 for subtraction");
    printf("Enter 3 for multiplicaiton");
    printf("Enter 4 for division");
    printf("Enter 5 for power");
    printf("Enter 6 for factorial");
    scanf("%d", &choice);
    printf("Enter 2 numbers");
    scanf("%d %d", &a , &b);

    switch(choice)
    {
        case 1:
            printf("sum is %d",a+b);
            break;
        case 2:
            printf("Difference is %d", a-b);
            break;
        case 3:
            printf("product is %d", (a*b));
            break;
        case 4:
            printf("Division is %d", (a/b));
            break;
        case 5:
            printf("Answer: %.0f\n", pow(a, b));
            break;
        case 6:
        {
            int fact1=1, fact2=1;
            for (int i =2; i<=a;i++)
            {
                fact1*=i;

            }
            printf("Factorial of first number is: %d", fact1);
            for (int i =2; i<=b;i++)
            {
                fact2*=i;
            }
            printf("Factorial of first number is: %d", fact2);
            break;
        }
        default:
            printf("Invalid choice");
    }
    
}