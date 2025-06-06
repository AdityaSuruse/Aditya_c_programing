// nlc india
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a, b, i, n, sum = 0, result = 0, cnt = 0, temp = 0, rev = 0, fact = 1, flag = 1;
    printf("Enter A Numbeer");
    scanf("%d",&n);
    printf("\nEnter A Expresion\n1 Palindrome\n2 Aemstrong\n3 Reverse\n4 Factoreial\n5 Prime\n6 perfect\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        {
            int rem = n % 10;
            rev = rev * 10 + rem;
            n = n / 10;
        }
        if (rev == temp)

            printf("%d Palindrome Noumber");

        else
            printf("%d No Palindrome Noumber");
        break;
    case 2:
        {
            cnt++;
            n = n / 10;
        }
        n = temp;
        while (n > 0)
        {
            int rem = n % 10;
            result = result + pow(rem, cnt);
            n /= 10;
        }
        if (result == temp)

            printf("%d Arstrong Number");

        else
            printf(" %d Not Arstrong Number");
        break;
    case 3:
        {
            int rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }
        printf("Reverse Number is %d", rev);
        break;
    case 4:
        {
            fact *= i;
            i++;
        }
        printf("Factoreial is %d", fact);
        break;
    case 5:
       
        {
             if (n % 2 == 0 || n % 3 == 0)
            flag = 0;
        else
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

            printf("%dPrime Number");
        else
            printf("%dNot prime Number");
        break;
    case 6:
        {
            for (i = 1; i <= n / 2; i++)
            if (n % i == 0)
                sum += i;
        }
        if (sum == n)

            printf("%dperfect Number");
        else
            printf("%dNot Perfect Number");
            break;
    default:
        printf("!!!");
        break;
    }
}