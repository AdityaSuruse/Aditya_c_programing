#include<stdio.h>
int main ()
{
    int i,n;
    printf("Enter a N ");
    scanf("%d",&n);
   for ( i = 1; i < n; i+=2)
   {
    printf("%d\n",i);
   }
   
    return 0;
}