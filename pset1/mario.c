#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int one = 1;
    int hash = 2;
    
    while (one == 1)
    {
        printf("Height: ");
        int pyrHeight = get_int();
        
        if (pyrHeight > 0 && pyrHeight < 24)
        {
            for (int i = pyrHeight - 1; i > -1; i--)
            {
                printf("%*s", i, "");
                printf("%.*s\n", hash, "########################");
        
                hash++;
            }
            
            one = 0;
        }
        else if (pyrHeight == 0)
        {
            exit(0);
        }
        
    }
}