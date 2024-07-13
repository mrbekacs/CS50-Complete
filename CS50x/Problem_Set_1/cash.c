#include <cs50.h>
#include <stdio.h>

int main()
{
    int n;
    int num_coins = 0;

    n = get_int("Change owed: ");
    while (n < 0)
    {
        n = get_int("Change owed: ");
    }

    while (n > 24)
    {
        if (n - 25 >= 0)
            num_coins++;
        n -= 25;
    }

    while (n > 9)
    {
        if (n - 10 >= 0)
            num_coins++;
        n -= 10;
    }

    while (n > 4)
    {
        if (n - 5 >= 0)
            num_coins++;
        n -= 5;
    }

    while (n > 0)
    {
        if (n - 1 >= 0)
            num_coins++;
        n -= 1;
    }

    printf("%d\n", num_coins);
}
