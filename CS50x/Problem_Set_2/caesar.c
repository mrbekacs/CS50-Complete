#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("./caesar key\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: /caesar key\n");
            return 1;
        }

    }

    int k = atoi(argv[1]);

    string text = get_string("Plaintext: ");

    printf("Ciphertext: ");

    for (int j = 0; j < strlen(text); j++)
    {
        if (isupper(text[j]))
        {
            printf("%c", (text[j] - 65 + k) % 26 + 65);
        }
        else if (islower(text[j]))
        {
            printf("%c", (text[j] - 97 + k) % 26 + 97);
        }
        else
        {
            printf("%c", text[j]);
        }
    }

    printf("\n");

}
