#include <stdio.h>

int normalM(int x, int y)
{
    int temp = x;
    x=y;
    y=temp;
    printf("The value of x is %d and the value of y is %d \n", x, y);
    return 0;

}
int pointerM(int *x, int *y)
{
    int temp = *x; /* pointer refers to value of address , the star  means value and & means address */
    *x=*y;
    *y=temp;
    printf("The value of x is %d and the value of y is %d \n", *x, *y);
    return 0;

}
void main()

{
    int a;
    printf("Enter 1 for normal method or enter 2 for pointer method \n");
    scanf("%d", &a);

    switch (a)
    {
        case 1:
        {
           int x, y;
            printf("enter the 2 numbers X and Y \n");
            scanf("%d %d", &x, &y);
            normalM(x,y);
            break;  
        }
        case 2:
        {
            int x, y;
            printf("enter the 2 numbers X and Y \n");
            scanf("%d %d", &x, &y);
            pointerM(&x,&y);
            break;  
        }
         default:
        {
            printf("Invalid input \n");
        }
    }
}