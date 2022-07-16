#include<stdio.h>
int main()
{
    int n,r,Y=0,Z;
    printf("Enter the number -> ");
    scanf("%d",&n);
    Z=n;
    while(n>0)
    {
        r=n%10;
        Y=(Y*10)+r;
        n=n/10;
    }
    
    if(Z==Y)
    {
    printf("palindrome number ");
    }
    
    else
    {
    printf("not a palindrome number");
    }
    return 0;
}