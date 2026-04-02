#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], c[2][2], i, j;

    
    printf("Enter matrix A (2x2):\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    printf("Enter matrix B (2x2):\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&b[i][j]);

    
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("\nMatrix C (A+B):\n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    
    float det_a = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    float det_b = b[0][0]*b[1][1] - b[0][1]*b[1][0];

    
    if(det_a != 0) {
        printf("\nInverse of A:\n");
        printf("%.2f %.2f\n", (float)a[1][1]/det_a, -(float)a[0][1]/det_a);
        printf("%.2f %.2f\n", -(float)a[1][0]/det_a, (float)a[0][0]/det_a);
    } else {
        printf("\nInverse of A doesn't exist\n");
    }

    
    if(det_b != 0) {
        printf("\nInverse of B:\n");
        printf("%.2f %.2f\n", (float)b[1][1]/det_b, -(float)b[0][1]/det_b);
        printf("%.2f %.2f\n", -(float)b[1][0]/det_b, (float)b[0][0]/det_b);
    } else {
        printf("\nInverse of B doesn't exist\n");
    }

    
    int sumA = a[0][0] + a[0][1];
    if(sumA == (a[1][0]+a[1][1]) &&
       sumA == (a[0][0]+a[1][0]) &&
       sumA == (a[0][1]+a[1][1]) &&
       sumA == (a[0][0]+a[1][1]) &&
       sumA == (a[0][1]+a[1][0]))
        printf("\nMatrix A is a Magic Square\n");
    else
        printf("\nMatrix A is NOT a Magic Square\n");

    
    int sumB = b[0][0] + b[0][1];
    if(sumB == (b[1][0]+b[1][1]) &&
       sumB == (b[0][0]+b[1][0]) &&
       sumB == (b[0][1]+b[1][1]) &&
       sumB == (b[0][0]+b[1][1]) &&
       sumB == (b[0][1]+b[1][0]))
        printf("Matrix B is a Magic Square\n");
    else
        printf("Matrix B is NOT a Magic Square\n");

    return 0;
}