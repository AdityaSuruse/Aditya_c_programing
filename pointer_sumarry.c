#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, n, i, sum;
    printf("Enter A Number Of N :");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
        scanf("%d", &p[i]);
    printf("Enter A Number Of Sum \n");
    for (i = 0; i < n; i++)
        printf("%d\n", p[i]);
    for (i = 0; i < n; i++)
        sum += p[i];
    printf("Addition is %d", sum);
    return 0;
}