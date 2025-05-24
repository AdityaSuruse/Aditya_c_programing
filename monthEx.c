#include <stdio.h>
int main()
{
    int c;
    printf("Enter Month Number");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("31 Days");
        break;
    case 2:
        printf("28 Days");
        break;
    case 3:
        printf("31 Days");
        break;
    case 4:
        printf("30 Days");
        break;
    case 5:
        printf("31 Days");
        break;
    case 6:
        printf("30 Days");
        break;
    case 7:
        printf("31 Days");
        break;
    case 8:
        printf("31 Days");
        break;
    case 9:
        printf("30 Days");
        break;
    case 10:
        printf("31 Days");
        break;
    case 11:
        printf("30 Days");
        break;
    case 12:
        printf("31 Days");
        break;
    default:
        printf("Invlid Month Number");
        break;
    }
}






// switch statment using when easy to execute numbers program

// #include <stdio.h>
// int main()
// {
//     int c;
//     printf("Enter Month Number");
//     scanf("%d", &c);
//     switch (c)
//     {
//     case 1:
//     case 3:
//     case 10:
//     case 5:
//     case 8:
//     case 12:
//     case 7:
//         printf("31 Days");
//         break;
//     case 2:
//         printf("28/23 Days");
//         break;
//     case 4:
//     case 6:
//     case 9:
//     case 11:
//         printf("30 Days");
//         break;
//     default:
//         printf("Invlid Month Number");
//         break;
//     }
// }
