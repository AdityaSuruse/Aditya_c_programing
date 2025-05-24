#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Anything");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("Capital letter");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("Small letter");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("Digit");
    }
    else
    {
        printf("special Symbol");
    }
    return 0;
}
