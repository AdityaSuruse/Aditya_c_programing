#include <stdio.h>
#include <stdlib.h>
void accept(int *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &p[i]);
}
void display(int *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d\n", p[i]);
}