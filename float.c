#include<stdio.h>
float multiply(float a, float b)
{
    return a*b;
}
int main()
{
    float a=3.25 ,b=8.56;
    float product =multiply(a,b);
    printf("product of value :%f",product);
    return 0;
}