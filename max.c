#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter 2 Numbers : ");
    scanf("%d%d",&a,&b);

    if(a > b)
    printf("Max is : %d",a);
    else
        printf("Max is : %d",b);

    return 0;
}