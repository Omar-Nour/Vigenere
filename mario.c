#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // part 1 get a valid input for height
    int H; 
    do  
    {
        H = get_int("Height: ");  
    }
    while (H < 1 || H > 8);
    // part 2: build pyramid after validating input..
    for (int i = 0; i < H; i++)
    {
        for (int dd = 1; dd < (H - i); dd++)
        {
            printf(" ");
        }     
        for (int nl = -1; nl < i; nl++)
        {
            printf("#");
        }
        printf("\n");
    }
}
