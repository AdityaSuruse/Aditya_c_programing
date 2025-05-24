#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age");
    scanf("%d",&age);
    if (age>19)
    {
        printf("You Are Able To This");
    }
    else if
     (age>10)
    {
        printf("You Can Vote For Child %d");
    }
    else
    {
        printf("You Can't %d");
        return 0;
    }

}


