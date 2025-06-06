#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter A Row\n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)  
    {
        for(j = 1; j <=i; j++)
        {
            if(i==j||j==1)
       printf("#");
       else
      printf("*");
       
        }
       printf("\n");
        
    }
    return 0;
}

// for use this type  of graph
// #
// ##
// #*#
// #**#