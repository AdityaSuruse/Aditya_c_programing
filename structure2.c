#include <stdio.h>
struct employe
{
    int id;
    char name[100];
    float sal;
};

int main()
{
    struct employe e;
    printf("Enter Employe Detail :\n");
    printf("Enter Id :");
    scanf("%d", &e.id);
    printf("Enter Name :");
    scanf("%s", &e.name);
    printf("Enter Sal :");
    scanf("%f", &e.sal);
    printf("\n Given Data :\n");
    printf("Employe  Id  is =>%d\n ", e.id);
    printf("Employe Name is =>%s\n", e.name);
    printf("Employe Sal Is =>%f\n", e.sal);
    return 0;
}