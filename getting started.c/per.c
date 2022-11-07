#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,aggr;
    float per;
    printf("Enter the marks of 5 subjects:\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    aggr=m1+m2+m3+m4+m5;
    per=aggr/5;
    printf("Aggregate marks is %d\n",aggr);
    printf("Percentage marks is %f\n",per);
    return 0;
}