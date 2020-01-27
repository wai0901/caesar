#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // if ((argc != 2) || (atoi(argv[1]) <= 1) || (atoi(argv[1]) >= 9))
    // {
    //     printf("Enter valid digit\n");
    // }

    if (argc != 2)
    {
        printf("Try Again\n");
        return 1;
    }

    int num = atoi(argv[1]);

    if (num < 0)
    {
        printf("Try Again\n");
        return 1;
    }
    else
    {
        string plaintext = get_string("Please enter text: ");
        printf("ciphertext: ");

        int textNum = strlen(plaintext) ;

        for (int i = 0; i < textNum; i++)
        {
            // printf("%c", plaintext[i]);
            if (islower(plaintext[i]))
            {
                printf("%c", (((plaintext[i] + num) - 97) % 26) + 97);
            }
            else if (isalpha(plaintext[i]))
            {
                printf("%c", (((plaintext[i] + num) - 65) % 26) + 65);
            }
            else {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");
        return 0;
    }
}