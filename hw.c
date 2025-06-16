#include <stdio.h>
#include <limits.h>
int main()
{
    int max, a[100], i, n, second;
    printf("How Many Number You Want");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max = a[0];
    second = INT_MIN;
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            second = max;
            max = a[i];
        }
        else if (a[i] > second && a[i] != max)
            second = a[i];
    }
    printf("2nd Max Is :%d", second);
    return 0;
}