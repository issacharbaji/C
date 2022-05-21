
#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    for (int i = h ; i > 0 ; i--)
    {
        for (int j = 0 ; j < i - 1 ; j++)
        {
            printf(" ");
        }
        for (int j = h ; j >= i ; j--)
        {
            printf("#");
        }
        printf("\n");
    }

}
