#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int A[n],i,sum=0;
    for(i=0;i<=n;i++)
    {
        printf("enter the elements ");
        scanf("%d",&A[i]);
    }
    for(i=0;i<=n;i++)
    {
        sum=sum+A[i];
    }
      printf("the sum of elementss is:%d",sum);
      return 0;
}

