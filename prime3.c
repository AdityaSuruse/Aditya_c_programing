#include <stdio.h>
#include<math.h>
int main()
{
    int flag = 0, n, i;
    printf("Enter A Number");
    scanf("%d", &n);
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag=1;
            break;
        }
    }
    if (flag == 0)
        printf("prime Number");
    else
        printf("Not Prime Number");

    return 0;
}