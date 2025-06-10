#include <stdio.h>
int main()
{
    int min, a[100], i, n;
    printf("How Many Number You Want");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    min = a[0];
    for (i = 1; i < n; i++)
    {
        
        if (min > a[i])
            min = a[i];
    }
    printf("min is %d", min);
    return 0;
}