#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter The value");
    scanf("%d%d%d", &a, &b, &c);
    if (c > a && c > b)

        printf("max is %d",c);

    else if (a > b && a > c)
    {
        printf("max is %d",a);
    }
    else
        {
            printf("max is %d",b);
            return 0;
        }
        return 0;
}