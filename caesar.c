#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    // charr is the key input
    string charr = "null";
    if (argc > 1)
    {
        charr = argv[1];
    }
    // nD is non decimal
    int nD = 0;
    // KEY is the (charr) in the from of an integer
    int KEY;
    // check if inputed string consists of numbers 
    for (int i = 0; i < strlen(charr); i++)
    {
        if (charr[i] > 57 || charr[i] < 48)
        {
            nD = 1;
        }
    }
    if (nD == 1 || argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        KEY = atoi(charr);
    }
    string txt = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(txt); i++)
    {
        if isupper(txt[i])
        {
            printf("%c", (((txt[i] + KEY) - 65) % 26) + 65);
        }
        else if islower(txt[i])
        {
            printf("%c", (((txt[i] + KEY) - 97) % 26) + 97);
        }
        else
        {
            printf("%c", txt[i]);
        }     
    }  
    printf("\n");
    return 0;
}
