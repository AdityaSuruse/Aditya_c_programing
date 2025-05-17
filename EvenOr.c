#include <stdio.h>
int main()
{
    int n;
    printf("Enter anumber");
    scanf("%d", &n);
    if (n % 5 == 0)
    {
        printf("oddnumber");
    }
    else
    {
        printf("Even number");
        return 0;
    }
}