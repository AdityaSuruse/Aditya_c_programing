#include<stdio.h>
int maim()
{
    int n, cnt=0;
    printf("Eter A Number");
    scanf("%d",&n);
    while (n>0)
    {
        cnt++;
        n=n/10;
    }
    printf("Count of Digit %d\n ,cnt");
    return 0;
}