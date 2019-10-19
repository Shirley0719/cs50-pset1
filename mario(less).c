#include <stdio.h>
#include <cs50.h>
int get_height_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n <= 1 || n > 8);
    return n;
}

// Prompt user for height between 1 and 8 inclusive
int main(void)
{
    int h = get_height_int("Height: ");
    //iterate over each row
    for (int i = 0; i < h; i++)
    {
        //Print " " for each row
        for (int j = 0; j < h - i - 1; j++)
        {
            printf(" ");
        }
        //Print "#" for each row
        for (int a = 0; a < i + 1; a++)
        {
            printf("#");
        }
        printf("\n");
    }
}
