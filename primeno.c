#include <stdio.h>
int main()
{
    int cnt = 0, n, i;
    printf("Enter A Number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
    }
    if (cnt == 2)
        printf("prime Number");
    else
        printf("Not Prime Number");

    return 0;
}