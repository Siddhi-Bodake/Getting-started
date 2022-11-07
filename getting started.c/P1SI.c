#include<stdio.h>
int main()
{
    int p,n;
    float r,SI;
    p=1000;
    n=3;
    r=8.5;
    
    /*formula for simple interest*/
    SI=p*n*r/100;
    printf("%f\n",SI);
    return 0;
}