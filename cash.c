#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void)
{
    float f;
    int cents;
    int coins = 0;
    do
    {
        f = get_float("Owing? : ");   
    }
    while (f < 0);
    cents = round(f * 100);
    do
    {
       cents = cents - 25;
       coins++ ;  
    }
    while ( cents > 25 || cents == 25);
    do
    {
       cents = cents - 10;
       coins++ ;  
    }
    while ( cents > 10 || cents == 10);
    do
    {
       cents = cents - 5;
       coins++ ;  
    }
    while ( cents > 5 || cents == 5);
    do
    {
       cents = cents - 1;
       coins++ ;  
    }
    while ( cents > 1 || cents == 1);
    printf("%i\n", coins);     
}
