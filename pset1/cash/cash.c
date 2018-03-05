#include <cs50.h>
#include <math.h>
#include <stdio.h>

/* Implement a program that calculates
the minimum number of coins required
to give a user change */

float n;
int total = 0;
int main(void){
    do {
        n = get_float("Change owed:");
    }
    while (n < 0);
    n = round(n*100);

    while (n - 25 >= 0) {
        total++;
        n = n-25;
    }

    while (n-10 >= 0) {
        total++;
        n = n - 10;
    }

    while (n-5 >= 0) {
        total++;
        n = n - 5;
    }

    while (n-1 >= 0) {
        total++;
        n = n - 1;
    }
    printf("%i\n", total);
}