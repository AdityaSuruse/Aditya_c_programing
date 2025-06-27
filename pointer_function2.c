#include <stdio.h>
#include "pointer_function2.h"
int main()
{
    int n, *p;
    printf("Enter A N :");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    accept(p, n);
    printf("Given Number \n");
    display(p, n);
    return 0;
}