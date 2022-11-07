/*calculation of simple interest*/
#include<stdio.h>
int main()
{
    int p,n;
    float r,SI;
    printf("Enter values of p,n ,r\n");
    scanf("d%d%f",&p,&n,&r);
    SI=p*n*r/100;
    printf("%f\n",SI);
    return 0;

}