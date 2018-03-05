#include <cs50.h>
#include <stdio.h>

/* Implement a program that prints out a
double half-pyramid of a specified height */

int n;
int main(void)
{
    do {
        n = get_int("Height:");
    }
    while (n < 0 || n > 23);

    for (int i=0; i < n; i++)
    {
        //print out left pyramid spaces
        for (int j=0; j < n-i-1; j++)
        {
            printf(" ");
        }
        //print out left pyramid hashes
        for (int k=0; k < i+1; k++)
        {
            printf("#");
        }
        //print out gap
        for (int l=0; l<2; l++)
        {
            printf(" ");
        }
        for (int m=0; m < i+1; m++)
        {
            printf("#");
        }
        for(int p=0; p < p-i-1; p++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
