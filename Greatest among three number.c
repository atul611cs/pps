#include<stdio.h>
void main ()
{
    int x,y,z;
    printf("enter three numbers\n");
    scanf("%d%d%d",&x,&y,&z);
    if((x>=y)&&(x>=z))
    {
        printf("%d is the greatest number\n",x);
    }
    else if((y>=x)&&(y>=z))
{
    printf("%d is greatest number\n",y);
}
else
{
    printf("%d is greatest number\n",z);
}
}