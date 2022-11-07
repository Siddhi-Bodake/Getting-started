#include<stdio.h>
int main()
{
    float ba,da,hra,grpay;
    printf("\nEnter the basic salary of Ramesh:\n");
    scanf("%f",&ba);
    /*Formulas*/
    da=0.4*ba;
    hra=0.2*ba;
    grpay=ba+da+hra;
    /*Declaration*/
    printf("basic salary of ramesh is:%f\n",ba);
    printf("dearness allownance:%f\n",da);
    printf("House rent allowence:%f\n",hra);
    printf("Gross pay of ramesh is %f\n",grpay);
    return 0;
    
}