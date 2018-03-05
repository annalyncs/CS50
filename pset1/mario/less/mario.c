#include <stdio.h>
#include <cs50.h>

/* Implement a program that prints out a
half-pyramid of a specified height */

int n;
int main(void) {
    do {
        n = get_int("Height:");
    }
    while (n < 0 || n > 23);

    for (int i=0; i < n; i++) {
        //print number of spaces
        for (int j=0; j < n-i-1; j++) {
            printf(" ");
        }
        //print number of #
        for (int k=0; k < i+2; k++) {
            printf("#");
        }
        printf("\n");
    }
}

//EXPLANATIONS:

//first inner loop
// for(int j=0; j<n-i-1; j++)
// first run of for loop has j=0; n=8; i=0; j increments by 1 each time
// j = 0 < 7 ...is true so print a space
// j = 1 < 7 ...is true so print a space
// j = 2 < 7 ...is true so print a space
// j = 3 < 7 ...is true so print a space
// j = 4 < 7 ...is true so print a space
// j = 5 < 7 ...is true so print a space
// j = 6 < 7 ...is true so print a space
// j = 7 < 7 ...is false so stop the loop, don't print a space
//seven spaces total are printed on first line


//second inner loop
// for(int k=0; k<i+2; k++)
//first run of for loop has k =0; i=0; k increments by 1 each time
// 0 < 2 ...is true so print a hash
// 1 < 2 ...is true so print a hash
// 2 < 2...is false so stop the loop, don't print a hash
//two hashes total are printed on first line

//outer loop
//for(int i=0; i<n; i++)
//prints line break after inner loops have finished running