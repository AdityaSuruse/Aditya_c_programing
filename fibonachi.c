#include <stdio.h>
int main()
{
    int a, b, c, n, i;
    a = 0;
    b = 1;
    printf("Enter A Fibonachi Number");
    scanf("%d", &n);
    //  n=8;
    if (n == 1)

        printf("%d ", a);
    else if (n == 2)

        printf("%d %d", a, b);

    else if (n > 2)
    {
        printf("%d %d", a, b);
        for (i = 2; i < n; i++)
        {
            c = a + b;
            printf(" %d", c);
            a = b;
            b = c;
        }
    }
    return 0;
}