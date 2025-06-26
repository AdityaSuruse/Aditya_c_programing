#include <stdio.h>
#include "functionparameter.h"
int main()
{
    int n, c;
    while (1)
    {
        printf("\n1. perfect\n2. prime\n3. reverse\n4. armstrong\n5. palindrome\n6. exit\nEnter your choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &n);
            if (isPerfect(n))
                printf("%d is a perfect number\n", n);
            else
                printf("%d is not a perfect number\n", n);
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d", &n);
            if (isPrime(n))
                printf("%d is a prime number\n", n);
            else
                printf("%d is not a prime number\n", n);
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d", &n);
            printf("Reverse of %d is %d\n", n, reverse(n));
            break;
        case 4:
            printf("Enter a number: ");
            scanf("%d", &n);
            if (isArmstrong(n))
                printf("%d is an Armstrong number\n", n);
            else
                printf("%d is not an Armstrong number\n", n);
            break;
        case 5:
            printf("Enter a number: ");
            scanf("%d", &n);
            if (n == reverse(n))
                printf("%d is a palindrome\n", n);
            else
                printf("%d is not a palindrome\n", n);
            break;
        case 6:
            printf("Exiting...\n");
            return 0;
        default:
            break;
        }
    }
}