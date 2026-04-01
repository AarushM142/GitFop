#include <stdio.h>
void main()
{
    printf("Enter a number whose table you want");
    int choice;
    scanf("%d", &choice);

    for(int i = 1; i<=12;i++)
    {
        printf("%d \n",(choice * i));
    }
}