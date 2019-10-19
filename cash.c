#include <cs50.h>
#include <stdio.h>
#include <math.h>

//declare 
float get_positive_float (string prompt)
{
    float n;
    do
    {
        n = get_float("%s", prompt);
    }
    while (n<0);
    return n;
}


int main (void)
{
    //Prompt user for a non negative change
    float n = get_positive_float("change owned: ");
    
    //Round the cents to the nearest penny
     int cent= round (n*100);
    
    //Calculate the number of coins dispensed
     //the number of 25 cents
     int a = cent / 25;
     int a1 = cent % 25;
     
     //the number of 10 cents
     int b = a1 / 10;
     int b1 = a1 % 10;
         
     //the number of 5 cents
     int c = b1 / 5;
     int c1 = b1 % 5;
         
      // the number of 1 cents
      int d = c1 /1;
       
   // Add up the number of coins
   printf("%i\n", a+b+c+d);
}

