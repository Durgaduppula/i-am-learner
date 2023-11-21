#include<stdio.h>
int main()
{
    int avg=0;
    int sum=0;
    int x=0;
    int num[5];
    for(x=0;x<5;x++)
    {
      printf("enter number%d\n",(x+1));
      scanf("%d",&num[x]);
    }
    for(x=0;x<5;x++)
    {
    sum=sum+num[x];
    }
    avg=sum/5;
    printf("Average of entered number is:%d",avg);
    return 0;  
}