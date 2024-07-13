#include <cs50.h>
#include <stdio.h>

int main()
{
    int n;

    n = get_int("Height: ");
    while(n>8 || n<1)
    {
        n = get_int("Height: ");
    }

    for(int i=0; i<n; i++)
    {
        for(int d=n-1; d>i; d--)
        {
            printf(" ");
        }

        for(int h=-1; h<i; h++)
        {
            printf("#");
        }

        printf("\n");
    }
}
