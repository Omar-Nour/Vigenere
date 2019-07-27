#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int shift(char c);

int main(int argc, string argv[])
{
    int key[99999];
    // nA : is non-alphabetic
    int nA = 0;
    if (argc == 2)
    {
        string KEY = argv[1];
        for (int i = 0; i < strlen(KEY); i++)
        {
            if (KEY[i] < 65 || (KEY[i] > 90 && KEY[i] < 97) || KEY[i] > 122)
            {
                nA = 1;    
            }
        }
    }   
    if (argc != 2 || nA == 1)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    else
    {
        // shift to an int key for each character
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            key[i] = shift(argv[1][i]);    
        }
        int length = strlen(argv[1]);
        for (int j = 0; j < 999; j++)
        {
            key[j + length] = key[j];
        }
        string txt = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0, j = 0; i < strlen(txt); i++, j++)
        {
            if (txt[i] < 65 || (txt[i] > 90 && txt[i] < 97) || txt[i] > 122)
            {
                j--;
                printf("%c", txt[i]);    
            }
            if isupper(txt[i])
            {
                printf("%c", (((txt[i] + key[j]) - 65) % 26) + 65);
            }
            else if islower(txt[i])
            {
                printf("%c", (((txt[i] + key[j]) - 97) % 26) + 97);
            }
        }  
        printf("\n");
        return 0;
    }    
}

// Functions/Procedures :
int shift(char c)
{
    int shifted;
    if (isupper(c))
    {
        shifted = c - 65;
    }
    else
    {
        shifted = c - 97;
    }
    return shifted;
}
