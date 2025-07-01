#include <stdio.h>
struct Student
{
    int roll;
    char Name[100];
    float marks;
};

int main()
{
    struct Student s;
    printf("Enter Student Detail :\n");
    printf("Roll Number :");
    scanf("%d", &s.roll);
    printf("Name :");
    scanf("%s", &s.Name);
    printf("Marks :");
    scanf("%f", &s.marks);
    printf("\nGiven Data Is \n");
    printf("Roll number Is %d\n", s.roll);
    printf("Name Is %s\n", s.Name);
    printf("Marks IS %f\n", s.marks);
    return 0;
}