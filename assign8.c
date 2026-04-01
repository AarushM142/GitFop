#include <stdio.h>

void main()
{
    int a, b, c, d, e;
    printf("Enter marks for 5 subjects out of 100: ");

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    float avg = (a + b + c + d + e) / 5;
    if (avg >= 75)
    {
        printf("Passed with Distinction");
    }
    else if (avg >= 60)
    {
        printf("First Division, Passed");
    }
    else if (avg >= 50)
    {
        printf("Second Division, Passed");
    }
    else if (avg >= 40)
    {
        printf("Third Division, Passed");
    }
    else
    {
        printf("Failed");
    }
}