#include<stdio.h>
int main()
{
    int max,a[100],i,n;
    printf("How Many Number You Want");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
   scanf("%d",&a[i]);
    max=a[0];
    for ( i = 1; i < n; i++)
    {
       if(max<a[i])
       max=a[i];
    }
    printf("max is %d",max);
    return 0;
}