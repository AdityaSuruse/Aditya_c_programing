#include <stdio.h>
int main()
{
    int temp, n, rev = 0;
    printf("Enter A Anything");
    scanf("%d", &n);
    temp = n; // back up
    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (rev == temp)
    
        printf("Palindrome Noumber");

        else
         printf("No Palindrome Noumber");
    
    return 0;
}