#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Implement a program that encrypts Caesar's cipher */

string str;
int key;
int upper_index;
int lower_index;
int upper_c;
int lower_c;
int upper_letter;
int lower_letter;

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        key = atoi(argv[1]); //turn key from command line into integer
        str = get_string("plaintext: "); //prompt for plaintext
    }
    else
    {
        printf("Enter a number!\n");
        return 1;
    }

    printf("ciphertext: ");

    for (int i = 0, n = strlen(str); i < n; i++)
    {
        int array[n];
        if (str[i] >= 'A' && str[i] <= 'Z') //isupper(str[i]) is shorthand
        {
            upper_index = str[i] - 65; //ASCII to index
            upper_c = ((upper_index + key) % 26); //caesar's cipher algorithm, shift by key
            upper_letter = upper_c + 65; //index to ASCII
            array[i] = upper_letter;
            //((str[i]+k-65) % 26) + 65 more succinct; less variables
        }
        else if (str[i] >= 'a' && str[i] <= 'z') //islower(str[i]) is shorthand
        {
            lower_index = str[i] - 97; //ASCII to index
            lower_c = ((lower_index + key) % 26); //algorithm
            lower_letter = lower_c + 97; //index to ASCII
            array[i] = lower_letter;
            //((str[i]+k-97) % 26) + 97
        }
        else
        {
            array[i] = str[i]; //if not alphabetical
        }
        printf("%c", array[i]); //print out each letter
    }
    printf("\n");
    return 0;
}