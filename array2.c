#include <stdio.h>
int main()
{
    int a[100], n, i, sum = 0;
    printf("How Many Number You Want");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter Data type\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    for (i = 0; i < n; i++)
        sum += a[i];
        printf("Addition is %d",sum);
        return 0;
}