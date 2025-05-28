#include <stdio.h>
int main()
{
    int i, sum, n;
    printf("Enter N Mumber");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum += i;
    {
        printf("sum of 1 to %d is %d", n, sum);
    }
    return 0;
}