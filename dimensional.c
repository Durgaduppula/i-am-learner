#include<stdio.h>
void main()
{
    int arr[2][2],i,j;
    printf("Enter the values of 2*2 matrix:");
    
        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
             {
                scanf("%d",&arr[i][j]);
             }
        }     
        printf("the values of array:");
        
            for(i=0; i<2; i++)
            {
                printf("\n");
                for(j=0;j<2; j++)
                {
                printf("%d\t",arr[i][j]);
                }
           
            }    
           
}