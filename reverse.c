#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter A Number");
    scanf("%d",&n);
    while (n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("Reverse Number %d",rev);
    return 0;
    
}