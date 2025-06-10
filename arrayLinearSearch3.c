#include <stdio.h>
int main()
{
    int a[100], i, n, key, cnt = 0;
    printf("Enter Arrays Number\n=>");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter Number For Occurence\n=>");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (key == a[i])
            cnt++;
    }
    if (cnt == 0)
        printf("Not Found");
    else
        printf("Count Is %d", cnt);
    return 0;
}