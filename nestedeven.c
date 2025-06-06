#include<stdio.h>
int main()
{
    int i,j,n;
    int even=2;
    printf("Enter A Row\n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)  
    {
        for(j = 1; j <=i; j++,even+=2)
     printf("%d\t",even);
       printf("\n");
        
    }
    return 0;
}

// for give the number off graph is even 