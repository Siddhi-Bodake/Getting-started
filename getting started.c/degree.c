#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter temperature in fahrenheit:\n");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("temperature in centigrade degree:%f\n",c);
    return 0;
 }