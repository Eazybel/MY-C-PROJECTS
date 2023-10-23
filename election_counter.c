#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct Candidates
{
    char name[20];
    int vote;
} Candidates;

Candidates names[10];

int main()
{
    const int maxCandidates = 10;
    int candidate_count = maxCandidates;
    int voters = 0;

    printf("How many candidates are there?\n");
    scanf("%i", &candidate_count);

    for (int i = 0; i < candidate_count; i++)
    {
        printf("Candidate %i name:\n", i + 1);
        scanf("%s", names[i].name);
    }

    printf("How many voters are there? ");
    scanf("%i", &voters);

    for (int i = 0; i < voters; i++)
    {
        char voted[10];

        printf("Vote %i: ", i + 1);
        scanf("%s", voted);

        for (size_t j = 0; j < candidate_count; j++)
        {
            if (strcmp(voted, names[j].name) == 0)
            {
                names[j].vote++;
            }
        }
    }

    int maxVotes = 0;

    for (int i = 0; i < candidate_count; i++)
    {
        if (names[i].vote > maxVotes)
        {
            maxVotes = names[i].vote;
        }
    }

    printf("The winner(s) is/are:\n");
    for (int i = 0; i < candidate_count; i++)
    {
        if (names[i].vote == maxVotes)
        {
            printf("%s\n", names[i].name);
        }
    }

    return 0;
}