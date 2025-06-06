#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter A Row\n");
    scanf("%d",&n);
    for ( i = n; i >=1; i--)    
    {
        for ( j = n; j >= i ; j--)
        printf("%d",j);
        printf("\n");
        
    }
    return 0;
}
 
//for 5 to 1 grph