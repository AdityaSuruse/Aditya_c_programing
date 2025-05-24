#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a Character");
    scanf("%c", &ch);
    if (isupper(ch))
        printf("Capital Letter");
    else if (islower(ch))
        printf("Small Letter");
    else if (isdigit(ch))
        printf("Digit Number");
    else
        printf("Special Letter");
    return 0;
}