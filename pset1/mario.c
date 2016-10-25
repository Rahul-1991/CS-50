#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
    printf("height : ");
    height = GetInt();
    } while(height < 0 || height > 23);

    int i, j;
    int space = height-1, hash = 2;

    for (i=0; i<height; i++)
    {
        for (j=space; j>0; j--)
            printf(" ");

        space--;

        for (j=hash; j>0; j--)
            printf("#");
        printf("\n");
        hash++;
    }
}
 
