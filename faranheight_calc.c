#include <stdio.h>
#include <string.h>

/* print Faranheit-celsius table for fahr = 0 ... 300 */
char f[] = "F";
char c[] = "C";
char c_to_f[] = "C -> F";
char f_to_c[] = "F -> C";

void printRow(char standard[], float celcius, float fahr) {
   if(strcmp(standard, f) == 0) {
       printf("%3.0f\t\%6.1f\n", fahr, celcius);
   } else {
       printf("%3.0f\t\%6.1f\n", celcius, fahr);
   }
}

int main(int argc, char *argv[]) {
    float fahr, celcius;
    printf("%s", *argv);
    int lower, upper, step;
  
    /* lower limit of temperature table */
    lower = 0;
  
    /* upper limit of temperature table */
    upper = 300;

    /* size of steps in between iterations */
    step = 20;

    fahr = lower;
    
    char *conversion;    
    if(strcmp(argv[2], f) == 0) {
        conversion = f_to_c;
    } else {
        conversion = c_to_f;
    }

    printf("\n%s Temperature Conversion Table\n", conversion);
    while (fahr <= upper) {
        celcius = (5.0/9.0) * (fahr - 32.0);
        printRow(argv[2], celcius, fahr);
        fahr = fahr + step;
    }
}
