#include <stdio.h>
int main()
{
    int a[100], n, i;
    printf("Hoe Many Number You Want To Enter");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Give Data is \n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}