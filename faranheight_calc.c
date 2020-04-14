#include <stdio.h>

/* print Faranheit-celsius table for fahr = 0 ... 300 */

int main() {
    int fahr, celcius;
    int lower, upper, step;
  
    /* lower limit of temperature table */
    lower = 0;
  
    /* upper limit of temperature table */
    upper = 300;

    /* size of steps in between iterations */
    step = 20;

    fahr = lower;

    while (fahr <= upper) {
        celcius = 5 * (fahr - 32) / 9;
        printf("%3d\t\%6d\n", celcius, fahr);
        fahr = fahr + step;
    }
}
