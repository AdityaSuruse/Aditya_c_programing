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

        printf("%d \n", a);
    else if (n == 2)

        printf("%d\n %d\n", a, b);

    else if (n > 2)
    {
        printf("%d\n %d\n", a, b);
        for (i = 2; i < n; i++)
        {
            c = a + b;
            printf(" %d\n", c);
            a = b;
            b = c;
        }
    }
    return 0;
}