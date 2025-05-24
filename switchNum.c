#include <stdio.h>
int main()
{
    char a;
    printf("Enter Aything");
    scanf("%c", &a);
    switch (a)
    {
    case 'A' ... 'Z':
        printf("Capital Letters");
        break;
    case 'a' ... 'z':
        printf("Small Letters");
        break;
    case '0' ... '9':
        printf("Digit");
        break;
    default:
        printf("Spesal Symbol !!");
        break;
    }
    return 0;
}