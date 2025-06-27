#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, n, i;
    printf("Enter A N :");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    printf("Enter A Number \n");
    for (i = 0; i < n; i++)
        scanf("%d", &p[i]);
    printf("Given Data Is \n");
    for (i = 0; i < n; i++)
        printf("%d\n", p[i]);

    return 0;
}