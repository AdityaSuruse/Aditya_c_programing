#include<stdio.h>
int main ()
{
    int x,y,i;
    printf("Enter a starting Number : ");
    scanf("%d",&x);
    printf("Enter a ending Number : ");
    scanf("%d",&y);
    x=(x%2==0)?x:x+1;
   for ( i=x; i <=y; i+=2)
   {
    printf("%d\n",i);
   }
   
    return 0;
}


// odd 
#include<stdio.h>
int main ()
{
    int x,y,i;
    printf("Enter a starting Number : ");
    scanf("%d",&x);
    printf("Enter a ending Number : ");
    scanf("%d",&y);
    x=(x%3==0)?x:x+1;
   for ( i=x; i <=y; i+=2)
   {
    printf("%d\n",i);
   }
   
    return 0;
}