#include <stdio.h>
int main()
{
    int a[100], n, i, pos, key;
    printf("Enter A Position :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter A Position :");
    scanf("%d", &pos);
    printf("Enter A Key :");
    scanf("%d", &key);
    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];
    a[pos - 1] = key;
    n++;
    printf("After A Position :\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}