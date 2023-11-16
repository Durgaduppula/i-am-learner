#include <stdio.h>
int main()
{
    int a, b, g ;
    printf("enter the values of a,b");
    scanf("%d,%d",&a ,&b);
    g = ((a + b) + (a - b));
    printf(" the value of g is %d",g);
    return 0;
}