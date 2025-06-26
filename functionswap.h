#include <stdio.h>
void Swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}