/* Author: Kaleb Robert McKone
 * Date: 3-21-2018
 * A simple program that will print the conversions from fahr to celc
*/

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main() {

    float fahr, celcius;

    fahr = LOWER;

    printf("%s  %s\n", "Fahr", "Celc");

    while(fahr <= UPPER) {
        celcius = (5.0/9.0) * (fahr-32.0);
	printf("%3.0f %6.1f\n", fahr, celcius);
	fahr = fahr + STEP;
    }
}
