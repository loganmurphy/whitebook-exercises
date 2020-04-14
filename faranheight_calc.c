#include <stdio.h>

/* print Faranheit-celsius table for fahr = 0 ... 300 */

int main() {
    float fahr, celcius;
    int lower, upper, step;
  
    /* lower limit of temperature table */
    lower = 0;
  
    /* upper limit of temperature table */
    upper = 300;

    /* size of steps in between iterations */
    step = 20;

    fahr = lower;

    while (fahr <= upper) {
        celcius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t\%6.1f\n", fahr, celcius);,
        fahr = fahr + step;
    }
}
