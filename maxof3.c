#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Number");
    scanf("%d%d%d",&a,&b,&c);
    b=(a>b)?a:b;
    b=(c>b)?c:b;
    printf("max is %d",b);
    return 0;
}


// on line program
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter Three Number");
//     scanf("%d%d%d",&a,&b,&c);
//      printf("max is %.0f",fmax(a,fmax(b,c)));
//     return 0;
// }