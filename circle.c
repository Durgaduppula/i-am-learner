#include<stdio.h>
int main()
{
    int radius;
    float pI=3.14,area,ci;
    printf("enter the radius of circle :");
    scanf("%d",&radius);
    area=pI*radius*radius;
    printf("\n area of a circle:%f",area);
    ci=2*pI*radius;
    printf("\n circumference of a circle is : %f ci");
    return 0;
}