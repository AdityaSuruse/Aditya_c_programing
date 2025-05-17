// Turnary Operators
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter the number");
//     scanf("%d%d",&a,&b);
//     printf("min is %d",(a<b)?a:b);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter the number");
//     scanf("%d%d",&a,&b);
//     (a>b)?printf("max is %d",a):printf("max is %d",b);
//     return 0;
// }
// HW> Whatis JEN AI

#include<stdio.h>
#include<math.h>
int main()
{
  int a,b;
  printf("Enter The Number");
  scanf("%d%d",&a,&b);
  printf("max is %.2f",fmax(a,b));
  return 0;
}