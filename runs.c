#include <stdio.h>

int main()
{
    int runs[11];
    int i, total = 0;


    // Taking input for runs of each player
    for(i = 0; i < 11; i++)
    {
        scanf("%d", &runs[i]);
    }

    // calculating runs of each player
    for(i = 0; i < 11; i++)
    {
        if(runs[i] == 0)
        {
            printf("Player %d: OUT FOR A DUCK!\n", i + 1);
        }
        else if(runs[i] < 30)
        {
            printf("Player %d: Scored %d runs - a decent contribution\n", i + 1, runs[i]);
        }
        else if(runs[i] < 50)
        {
            printf("Player %d: Solid knock of %d runs!\n", i + 1, runs[i]);
        }
        else if(runs[i] < 100)
        {
            printf("Player %d: HALF-CENTURY! %d runs\n", i + 1, runs[i]);
        }
        else
        {
            printf("Player %d: CENTURY!! What an innings - %d runs!\n", i + 1, runs[i]);
        }

        total = total + runs[i];
    }

    printf("===== MATCH SUMMARY =====\n");
    printf("Total Team Score: %d\n", total);

    return 0;
}