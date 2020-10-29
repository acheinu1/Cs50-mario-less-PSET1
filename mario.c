#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, column, row, blank;
    do
    {
        height = get_int("type in a height from 1-8:");  //prompts user to type a number
    }
    while (height < 1 || height > 8);  // use do while loop to check if number input is of the expected range

    for (row = 0; row < height ; row++)

    {
        for (blank = 0; blank < height - row - 1; blank++)  // pushes the hashes to the right
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++)



            printf("#");



        printf("\n");
    }
}