#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("+ve number");
    }
    else
    {
        printf("-ve number");
    }
}