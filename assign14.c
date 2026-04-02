#include <stdio.h>


void main()
{
    int binary, bin, i=0, decimal=0;
    printf("Enter the binary number : ");
    scanf("%d",&binary);
    bin = binary;
    while(binary!=0)
    {
        decimal += (binary%10)*(1 << i);
        binary /= 10;
        i++;
    }
    printf("The binary %d in decimal is %d\n",bin,decimal);
}