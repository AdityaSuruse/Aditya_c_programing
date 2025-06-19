#include <stdio.h>
int main()
{
    int a[100], i, j, n,k;
    printf("Enter A NUmber :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter A Number For A Delete :");
    scanf("%d", &k);
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                    a[k] = a[k + 1];
                n--;
                j--;
            }
        }
    }
    printf("After Deleying Number :");
    for ( i = 0; i < n; i++)
    printf("%d\n",a[i]);
    return 0;
    
}