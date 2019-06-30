#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float f;
    int cents;
    int coins = 0;
    // make sure input is +ve
    do
    {
        f = get_float("Owing? : ");   
    }
    while (f < 0);
    cents = round(f * 100);
    // start greedy algorithm
    while (cents > 24)
    {
        cents = cents - 25;
        coins++ ;    
    }
    while (cents > 9)
    {
        cents = cents - 10;
        coins++ ;    
    }
    while (cents > 4)
    {
        cents = cents - 5;
        coins++ ;    
    }
    while (cents > 0)
    {
        cents = cents - 1;
        coins++ ;    
    }
    printf("%i\n", coins);     
}
