#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, flag = 1; //Flah is starting value is (1)
    printf("Enter A Number");
    scanf("%d", &n);
    if (n % 2 == 0 || n % 3 == 0)
        flag = 0;
    else
    {
        for (i = 5; i <= sqrt(n); i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)

        printf("Prime Number");
    else
        printf("Not prime Number");
}