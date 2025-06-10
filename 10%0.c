#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter A Number");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
      if (n%2==0)
      
        printf("%d\n",i);
      
      
    }
    
    return 0;
    
}