#include <stdio.h>
int main()
{
    int a,n;
    printf("Enter N number");
    scanf("%d",&n);
    a=1;
    {
        while (a<=n)
        {
            printf("%d \n",a);
            a++;
        }
        
    }
   
    return 0;
}