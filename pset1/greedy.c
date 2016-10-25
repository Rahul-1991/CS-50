#include <stdio.h>
#include <cs50.h>
#include <math.h>
#define QRT 25
#define DIM 10
#define NICK 5
#define PENNI 1

int main(void)
{
    float change;
    do
    {
        printf("O hai! How much change is owed?\n");
        change = GetFloat();
    } while (change < 0);

    change = change*100;
    double new_change = round(change);
    int ch = (int)new_change;
    int count = 0;
    while (ch > 0)
    {
        if (ch >= QRT)
        {
            count++;
            ch = ch - QRT;
        }

        else if (ch >= DIM)
        {
            count++;
            ch = ch - DIM;
        }

        else if (ch >= NICK)
        {
            count++;
            ch = ch - NICK;
        }

        else
        {
            count++;
            ch = ch - PENNI;
        }
    }

    printf("%d\n", count);
}
