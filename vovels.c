#include<stdio.h>
#include<ctype.h>
int main()
{
    char v;
    printf("Enter Vovel");
    scanf("%c",&v);

    v = tolower(v);
    switch (v)
    {
    case 'a':    
    case 'e':   
    case 'i':  
    case 'o':   
    case 'u':
    printf("Vovel");
        break;
    default:
        printf("Invlid Vovel");
        break;
    }
   
}