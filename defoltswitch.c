#include <stdio.h>
int main()
{
    int a, b, ch;
    printf("\nEnter a choice \n Addition\nsubstraction\nMultiplication\ndivision");
    scanf("%d", &ch);
    printf("Enter To Number");
    scanf("%d%d", &a, &b);
    switch (ch)
    {
    case 1:
        printf("Addition : %d", a + b);
        break;
    case 2:
        printf("substraction : %d", a - b);
        break;
    case 3:
        printf("Multiplication : %d", a * b);
        break;
    case 4:
        printf("division : %d", a / b);
        break;

    default:
        printf("Invaled");
        break;
    }
}