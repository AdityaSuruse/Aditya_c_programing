#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter A Row\n");
    scanf("%d",&n);
    for ( j = 1; j <=n; j++)    
    {
        for ( i = 1; i <= j ; i++)
        printf("%d",j);
        printf("\n");
        
    }
    return 0;
}