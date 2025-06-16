#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter A Expresion");
    scanf("%d%c%d",&a,&op,&b);
    switch (op) //int, char
    {
    case '+':
        printf("%d + %d = %d",a,b,(a+b));
        break;
    case '-':
    printf("%d - %d = %d",a,b,(a-b));
    break;
    case '*':
    printf("%d * %d = %d",a,b,(a*b));
    break;
    case '/':
    printf("%d / %d = %d",a,b,(a/b));
    break;
    default:
        break;
    }
}



// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("\nEnter a Number");
//     scanf("%d%d%d", &a,&b,&c);
//     switch (c)
//     {
//     case 1:
//         printf("a : %d", a + b + c);
//         break;
//     case 2:
//         printf("b : %d", a - b - c);
//         break;
//     case 3:
//         printf("c : %d", a * b * c);
//         break;

//     default:
//         printf("Number :%d",a+b+c);
//         break;
//     }
// }