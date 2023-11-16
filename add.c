#include <stdio.h>
int main()
{
    int a, b, c, g;
    printf("enter the values of a,b,c");
    scanf("%d,%d,%d",&a ,&b,&c);
    g = ((a + b+c) + (a - b-c));
    printf(" the value of g is %d",g);
    return 0;
}