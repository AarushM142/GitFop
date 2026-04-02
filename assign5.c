#include<stdio.h>

void main()
{
    int a[2][2], b[2][2], c[2][2], i, j ;

    //input loops for a and b arrays
    printf("Enter values of elements of matrix A : ");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter values of elements of matrix B : ");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    //addtion loop
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    //output loop
    printf("\nThe final matrix C by addition of A and B is : ");
    for(i=0;i<=1;i++)
    {
        printf("\n");
        for(j=0;j<=1;j++)
        {
            printf("%d ",c[i][j]);
        }
    }
    printf("\n\n");

    for(i=0;i<2;i++)
    {
        int row_min1 = a[i][0], row_min2 = b[i][0], col_index1 = 0, col_index2 = 0;
        for(j=1;j<2;j++)
        {
            if(a[i][j] < row_min1 && b[i][j] > row_min2)
            {
                row_min1 = a[i][j];
                row_min2 = b[i][j];
                col_index1 = j;
                col_index2 = j;
            }
        }
        int k;
        for(k=0;k<2;k++)
        {
            if(a[k][col_index1] > row_min1 && b[k][col_index2] > row_min2)
                break;
        }
        if(k==2)
        {
            printf("Saddle point of matrix A is : %d\n",row_min1);
            printf("Saddle point of matrix B is : %d\n",row_min2);
        }
    }

    float det_a = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]), det_b = (b[0][0] * b[1][1]) - (b[0][1] * b[1][0]) ;
    if (det_a == 0 && det_b==0) 
    {
        printf("Inverse of A and B doesn't exist (Determinant is 0).\n");
    } 
    else if(det_a != 0 && det_b == 0)
    {
    printf("Inverse of A:\n");
    printf("%.2f  %.2f\n", a[1][1]/det_a, -a[0][1]/det_a);
    printf("%.2f  %.2f\n", -a[1][0]/det_a, a[0][0]/det_a);
    printf("Inverse of B doesn't exist (Determinant is 0).\n");
    }
    else if(det_a == 0 && det_b != 0)
    {
        printf("Inverse of B:\n");
        printf("%.2f  %.2f\n", b[1][1]/det_b, -b[0][1]/det_b);
        printf("%.2f  %.2f\n", -b[1][0]/det_b, b[0][0]/det_b);
        printf("Inverse of A doesn't exist (Determinant is 0).\n");
    }
    else
    {
        printf("Inverse of A:\n");
        printf("%.2f  %.2f\n", a[1][1]/det_a, -a[0][1]/det_a);
        printf("%.2f  %.2f\n", -a[1][0]/det_a, a[0][0]/det_a);
        printf("Inverse of B:\n");
        printf("%.2f  %.2f\n", b[1][1]/det_b, -b[0][1]/det_b);
        printf("%.2f  %.2f\n", -b[1][0]/det_b, b[0][0]/det_b);
    }

    int asumD1 = a[0][0] + a[1][1];
    int asumD2 = a[0][1] + a[1][0];
    int arow0 = a[0][0] + a[0][1];
    int arow1 = a[1][0] + a[1][1];
    int acol0 = a[0][0] + a[1][0];
    int acol1 = a[0][1] + a[1][1];

    if (asumD1 == asumD2 && asumD1 == arow0 && asumD1 == arow1 && asumD1 == acol0 && asumD1 == acol1)
        printf("Matrix A is a Magic Square!\n");
    else
        printf("Not a Magic Square.\n");

    int bsumD1 = a[0][0] + a[1][1];
    int bsumD2 = a[0][1] + a[1][0];
    int brow0 = a[0][0] + a[0][1];
    int brow1 = a[1][0] + a[1][1];
    int bcol0 = a[0][0] + a[1][0];
    int bcol1 = a[0][1] + a[1][1];

    if (bsumD1 == bsumD2 && bsumD1 == brow0 && bsumD1 == brow1 && bsumD1 == bcol0 && bsumD1 == bcol1)
        printf("Matrix A is a Magic Square!\n");
    else
        printf("Not a Magic Square.\n");

    printf("\n");
    
}