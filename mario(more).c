#include <cs50.h>
#include <stdio.h>

int get_height_int(string prompt)
{
    int n;
    do
    {
        n=get_int("%s" , prompt);
    }
    while (n<1 || n>8);
    return n;
}


int main(void)
{
    int h = get_height_int("Height: ");
    for (int i = 0; i < h; i++)
 {
        for (int j = 0; j < 7-i; j++)
        {
            printf(" ");
        }
        for (int a = 0; a < i+1; a++)
        {
            printf("#");
        }
        for (int b = 0; b < 2; b++)
        {
            printf(" ");
        }
        for (int a = 0; a < i+1; a++)
        {
            printf("#");
        } 
       printf("\n");
 }      
}



