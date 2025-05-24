// #include <stdio.h>
// int main()
// {
//     int h, m, s;
//     printf("Enter Hours");
//     scanf("%d", &h);
//     printf("Enter Minate");
//     scanf("%d", &m);
//     printf("Enter Sec");
//     scanf("%d", &s);
    // if (h >= 0 && h < 24)
    // {
    //     if (m >= 0 && m < 60)
    //     {
    //         if (s >= 0 && s < 60)
    //         {
    //             printf("Time Is Valid");
    //         }
    //         else
    //             printf("Second Is Invalid");
    //     }
    //     else
    //         printf("Minite Are Invalid");
    // }
    // else
    //     printf("Hars Are Invalid");
//     return 0;
// }


#include <stdio.h>

int main() {
    float units, bill;
    const float rate_per_unit = 0.15; 
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    bill = units * rate_per_unit;

    // Output: Display the total bill
    printf("Total Light Bill: %.2f\n", bill);

    return 0;
}
