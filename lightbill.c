#include <stdio.h>

int main()
{
    int units;
    float bill = 0;

    printf("Enter Your Units");
    scanf("%d", &units);

    if (units >= 100)
    {
        bill = units * 3;
    }
    else if (units >= 200)
    {
        bill = units * 5;
    }
    else if (units >= 300)
    {
        bill = units * 7;
    }
    else if (units >= 400)
    {
        bill = units * 9;
    }
    else if (units >= 500)
    {
        bill = units * 12;
    }
    else
    {
        printf("You Use More Than Your Status 500 + You Have Charges 50k\n");
        return 0;
    }

    printf("Total Bill Rs. %.2f\n", bill);

    return 0;
}