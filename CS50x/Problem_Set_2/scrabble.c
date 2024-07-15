#include <stdio.h>
#include <string.h>
#include <ctype.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(const char* word);

int main()
{
    char word1[100];
    char word2[100];

    printf("Player 1: ");
    scanf("%99s", word1);

    printf("Player 2: ");
    scanf("%99s", word2);

    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    return 0;
}

int compute_score(const char* word)
{
    int score = 0;

    for(int i=0; i < strlen(word); i++)
    {
        if(isalpha(word[i]))
        {
            char letter = toupper(word[i]);

            score += POINTS[letter-'A'];
        }
    }

    return score;
}


