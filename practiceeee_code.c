// display
// #include<stdio.h>
// int main()
// {
//     int a[100],i,n;
//     printf("Enter A Number :");
//     scanf("%d",&n);
//     for ( i = 0; i < n; i++)
//     scanf("%d",&a[i]);
//     printf("Give Data :\n");
//     for ( i = 0; i < n; i++)
//     printf("%d\n",a[i]);
//     return 0;

// }

// sum

// #include<stdio.h>
// int main()
// {
//     int a[100],i,n,sum=0;
//     printf("Enter A Number :");
//     scanf("%d",&n);
// for ( i = 0; i < n; i++)
// scanf("%d",&a[i]);
// printf("Enter A NUmbe Of Sum :");
// for ( i = 0; i < n; i++)
// printf("%d",a[i]);
// for ( i = 0; i < n; i++)
// sum+=a[i];
// printf("Addition is %d",sum);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[100],i,n,key,flag=1;
//     printf("Enter A NUmber Of Array :");
//     scanf("%d",&n);
//     for ( i = 0; i < n; i++)
//    scanf("%d",&a[i]);
//    printf("Enter A Number For Sum :");
//    for ( i = 0; i < n; i++)
//    {
//     if (a[i]==key)
//     {
//         flag=0;
//         break;
//     }
//    }
//    if (flag=1)
//    printf("Not Found ");
//    else
//    printf("Found ");
//    return 0;
// }

// lenear search
// #include <stdio.h>
// int main()
// {
//     int a[100], i, n, key, cnt = 0;
//     printf("Enter A Number :");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//         scanf("%d", &a[i]);
//     printf("Enter A Count Of number :\n");
//     for (i = 0; i < n; i++)
//         scanf("%d", &key);
//     for (i = 0; i < n; i++)
//     {
//         if (key == a[i])
//             cnt++;
//     }
//     if (cnt == 0)
//         printf("Found");
//     else
//         printf("Count Of %d ", cnt);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int a[100],i,n,min=0;
    printf("Enter A Number Of Arr :");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    scanf("%d",&a[i]);
    min=0;
    for ( i = 0; i < n; i++)
    {
        if (min>a[i])
        min=a[i];
    }
    for ( i = 0; i < n; i++)
    printf("Minimum is %d",min);
    return 0;
}