#include <stdio.h>
int main()
{
    int a[100], i, n, temp;
    printf("Enter A Eeverse Number :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    printf("After Reverse Number :\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}