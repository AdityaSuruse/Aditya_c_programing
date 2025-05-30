#include <stdio.h>
#include <math.h>
int main()
{
    int n, result = 0, temp, cnt = 0;
    printf("Eter A Number");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        cnt++;
        n = n / 10;
    }
    n = temp;
    while (n > 0)
    {
        int rem = n % 10;
        result = result + pow(rem, cnt);
        n /= 10;
    }
    if (result == temp)

        printf("Arstrong Number");

    else
        printf("Not Arstrong Number");

    
        
    return 0;
}