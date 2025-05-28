#include<stdio.h>
int maim()
{
    int n;
    printf("Eter A Number");
    scanf("%d",&n);
    while (n>0)
    {
      int rem = n%10;
      printf("%d ",rem);
      n=n/10;
    }
    return 0;
}