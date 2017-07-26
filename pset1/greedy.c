#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    int run = 1;
    
    while (run == 1)
    {
        printf("O hai! How much change is owed?\n");
        float changeOwed = get_float(); // User inputs change
        int coins = 0; // Counts number of coins
        
        changeOwed *= 100; // Turn dollar amount in cents
        int truncChange = round(changeOwed);
        
        if (truncChange > 0)
        {
            while (truncChange >= 25)
            {
                truncChange -= 25;
                coins++;
            }
            
            while (truncChange >= 10 && truncChange < 25)
            {
                truncChange -= 10;
                coins++;
            }
            
            while (truncChange >= 5 && truncChange < 10)
            {
                truncChange -= 5;
                coins++;
            }
            
            while (truncChange >= 1 && truncChange < 5)
            {
                truncChange -= 1;
                coins++;
            }
        }
        
        printf("%i\n", coins);
    }
}