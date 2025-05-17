// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter Your Age");
//     scanf("%d",&age);
//     if (age>19)
//     {
//         printf("You Are Able To This");
//     }
//     else if
//      (age>10)
//     {
//         printf("You Can Vote For Child %d");
//     }
//     else
//     {
//         printf("You Can't %d");
//         return 0;
//     }

// }

#include <stdio.h>

int main()
{
    int a;
    printf("Enter five numbers: ");
    scanf("%d", &a);

    if (a>400)
    {
        printf("You Have Select Top 1");
    }
    else if (a>300)
    {
        printf("You Have Select Top 5");
    }
    else if (a>200)
    {
        printf("You Have Select Top 50");
    }
    else
    {
        printf("Better Luck Next Time");
    }

    return 0;
}

