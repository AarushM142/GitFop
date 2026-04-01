#include <stdio.h>
void main()
{
    float basic_pay,HRA,TA,PT,TS,GROSS,NET;
    printf("enter basic pay");
    scanf("%f", &basic_pay);
    HRA= 0.1*basic_pay;
    TA=0.05*basic_pay;
    GROSS= basic_pay+HRA+TA;
    printf("salary is %f \n", GROSS);
    PT= GROSS*0.02;
    NET= GROSS-PT;
    printf("Net salary is %f", NET);
}