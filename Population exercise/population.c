
#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int startSize, endSize;
    int years = 0;

    //Prompt for start size
    do
    {
        startSize = get_int("Start size: ");
    }
    while (startSize < 9);

    //Prompt for end size
    do
    {
        endSize = get_int("End size: ");
    }
    while (endSize < startSize);

    //Calculate number of years until we reach threshold
    while (startSize < endSize)
    {
        years++;
        startSize = startSize + (startSize / 3) - (startSize / 4);
    }

    // TODO: Print number of years
    printf("Years: %i", years);
}
