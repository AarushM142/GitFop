#include <stdio.h>

void main()
{
    int choice,a,b;
    printf("----Menu----");
    printf("Enter 1 for addition");
    printf("Enter 2 for subtraction");
    printf("Enter 3 for multiplicaiton");
    printf("Enter 4 for division");
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
            printf("Division is %f", (a/b));
            break;
        default:
            printf("Invalid choice");
    }
    
}