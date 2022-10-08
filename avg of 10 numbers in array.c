#include<stdio.h>
int main()
{
    int A[10],i,sum=0;
    float avg;
    printf("enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&A[i]);

     for(i=0;i<=9;i++)
        sum=sum+A[i];

     avg=sum/10;
     printf("average is %f",avg);
     return 0;
}
