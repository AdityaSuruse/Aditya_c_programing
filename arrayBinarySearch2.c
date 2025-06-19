#include <stdio.h>
int main()
{
    int a[100], i, n, key, flag = 1;
    printf("Enter Nummber");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter a Number For Search");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("Not Found");
    else
        printf("Found");
    return 0;
}