// This code prints a right aligned pyramid of hashes in the terminal

#include <cs50.h>
#include <stdio.h>

int main(void)
// This block gets an int from the user and prints it.
// It only prints if the input is 1 through 8
{
    int height;
    int side;
    int down;
    int space;

    do
        height = get_int("height: ");
    while (height < 1 || height > 8);

    // Bellow block runs a "for" loop with two nested "for" loops that print spaces and hashes
    // The "space" for loop prints spaces before the hashes to right align the pyramid

    for (side = 0; side < height; side++)
    {
        for (space = 0; space < height - side - 1; space++)
        {
            printf(" ");
        }
        for (down = 0; down < side + 1; down++)
        {
            printf("#");
        }
        printf("\n");
    }
}
