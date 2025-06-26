#include <stdio.h>
#include "functionswap.h"
int main()
{
    int a, b;
    printf("Enter A 2 Number :");
    scanf("%d%d", &a, &b);
    printf("Befor Swapping :");
    printf("\n A=%d", a);
    printf("\n B=%d", b);
    Swap(&a, &b);
    printf("\nAfter Swaping :");
    printf("\nA=%d", a);
    printf("\n B=%d", b);
    return 0;
}