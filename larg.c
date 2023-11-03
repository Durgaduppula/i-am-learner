#include<stdio.h>
void main()
{
    int a,b,c,larg;
    printf("enter three number\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        larg=a;
        else
        larg=c;
    }
    else
    {
        if(b>c)
        larg=b;
        else
        larg=c;
    }
    printf("largest number is :%d",larg);

}
        
        

    


    
    


