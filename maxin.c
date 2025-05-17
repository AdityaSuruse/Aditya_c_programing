#include <stdio.h>

int main()
{
    int a = 100, b = 200, c = 300, d = 400, e = 500;
    printf("Enter five numbers: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    if (e > d)
    {
        printf("You Have Select Top 1");
    }
    else if (d > c)
    {
        printf("You Have Select Top 5");
    }
    else if (c > b)
    {
        printf("You Have Select Top 50");
    }
    else
    {
        printf("Better Luck Next Time");
    }
    return 0;
}