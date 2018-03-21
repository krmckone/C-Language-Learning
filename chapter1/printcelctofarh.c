/* Author: Kaleb Robert McKone
 * Date: 3-21-2018
 * A simple program that will print the conversions from celc to fahr
*/

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main() {

    float fahr, celcius;
    int lower, upper, step;

    celcius = LOWER;

    printf("%s  %s\n", "Celc", "Fahr");

    while(celcius <= UPPER) {
        fahr = ((9.0/5.0) * celcius) +32.0;
	printf("%3.0f %6.1f\n", celcius, fahr);
	celcius = celcius + STEP;
    }
}
