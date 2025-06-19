#include <stdio.h>
int main()
{
    int a[100], i, j, n, flag, key, pos, cnt=0, ch;
    printf("Enter A Number of Arrys:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    while (1)
    {
        printf("\n\n1. Display\n 2. Search\n 3. Insert\n 4. Delete\n 5. Count\n 6. Reverse\n 7. Exit\nEnter a Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            for (i = 0; i < n; i++)
                printf("%d\n", a[i]);
            break;
        case 2:
            flag = 0;
            printf("Enter A Number Of Search :");
            scanf("%d", &key);
            for (i = 0; i < n; i++)
            {
                if (key == a[i])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
                printf("%d Is Founf ", key);
            else
                printf("%d Is Not found", key);
            break;
        case 3:
            printf("Enter A Position :");
            scanf("%d", &pos);
            printf("Enter A Key :");
            scanf("%d", &key);
            for (i = n; i >= pos; i--)
                a[i] = a[i - 1];
            a[pos - 1] = key;
            n++;
            printf("After A Position :\n");
            for (i = 0; i < n; i++)
                printf("%d\n", a[i]);
            break;
        case 4:
            printf("EnterA NUmber For A delete : ");
            scanf("%d", &key);
            for (i = 0; i < n; i++)
            {
                if (key == a[i])
                {
                    for (j = i; j < n - 1; j++)
                        a[j] = a[j + 1];
                    n--;
                    i--;
                }
            }
            printf("After A Deletion Of Number :\n");
            for (i = 0; i < n; i++)
                printf("%d\n", a[i]);
            break;
        case 5:
            printf("Enter Number For Occurence\n=>");
            scanf("%d", &key);
            cnt =0;
            for (i = 0; i < n; i++)
            {
                if (key == a[i])
                    cnt++;
            }
            if (cnt == 0)
                printf("Not Found");
            else
                printf("Count Is %d", cnt);
            break;
        case 6:
            for (i = 0; i < n / 2; i++)
            {
                int temp = a[i];
                a[i] = a[n - 1 - i];
                a[n - 1 - i] = temp;
            }
            printf("After Reverse Number :\n");
            for (i = 0; i < n; i++)
                printf("%d\n", a[i]);
            break;
        case 7:
            break;
        default:
            printf("Invaled Choice !!");
            break;
        }
    }

    return 0;
}