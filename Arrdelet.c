#include <stdio.h>
int main()
{
    int a[100], i, n, j, key;
    printf("Enter A number : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("EnterA NUmber For A delete : ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            for (j = i; j < n - 1; j++)
                a[j] = a[j + 1];
            n--;
            i--;
        }
    }
    printf("After A Deletion Of Number :\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}