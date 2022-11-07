#include<stdio.h>
int main()
{
    float l,b,r;
    float pr,area,ca,cir;
    //for rectangle
    printf("Enter length breadth and radius:\n");
    scanf("%f%f",&l,&b);
    //for circle
    printf("Enter the radius of circle:\n");
    scanf("%f",&r);
    //area of rectangle
    area=l*b;
    //perimeter of rectangle
    pr=2*(l+b);

    //area of circle
    ca=3.14*r*r;
    //circumference of circle
    cir=2*3.14*r;

    printf("area of rectangle=%f\n",area);
    printf("perimeter of circle=%f\n",pr);

    printf("Area of circle:%f\n",ca);
    printf("circumference of circle is:%f\n",cir);
     return 0;
}