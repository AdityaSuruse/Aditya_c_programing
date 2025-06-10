// #include <stdio.h>
// int main()
// {
//     int a, b, ch;
//     printf("\nEnter a choice \n Addition\nsubstraction\nMultiplication\ndivision");
//     scanf("%d", &ch);
//     printf("Enter To Number");
//     scanf("%d%d", &a, &b);
//     switch (ch)
//     {
//     case 1:
//         printf("Addition : %d", a + b);
//         break;
//     case 2:
//         printf("substraction : %d", a - b);
//         break;
//     case 3:
//         printf("Multiplication : %d", a * b);
//         break;
//     case 4:
//         printf("division : %d", a / b);
//         break;

//     default:
//         printf("Invaled");
//         break;
//     }
// }

#include <stdio.h>
int main()
{
    float units, amt = 0;
    printf("Enter Units");
    scanf("%f", &units);

    if (units <= 0)
    {
        printf("INVALID UNITS !!");
        return 0;
        printf("Hello");
    }

    if (units >= 100)
        amt += 100 * 5;
    units -= 100;
    if (units >= 100)
    {
        amt += 100 * 7;
        units -= 100;
        if (units >= 100)
        {
            amt += 100 * 9;
            units -= 100;
            if (units >= 100)
            {
                amt += 100 * 9;
                units -= 100;
            }
            else
                amt += units * 9;
        }
        else
            amt += units * 7;
    }
    else
        amt += units * 5;

    printf("Amt is : %.2f", amt);
    return 0;
}