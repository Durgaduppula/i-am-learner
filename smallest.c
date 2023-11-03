
#include<stdio.h>
void main()
{

    int a,b,c,small;
    printf("enter three number\n");
    scanf("%d %d %d",&a,&b,&c);
    if(c>b)
    {
        if(c>a)
        small=a;
        else
        small=c;
    }
    else
    {
        if(a>c)
        small=a;
        else
        small=c;
    }
    printf("smallest number is :%d",small);

}
        
        

    


    
    


