/*
* Author: Kaleb Robert McKone
* Date: 3-22-2018
* Prints input one word per line
*/

#include <stdio.h>

#define IN 1
#define OUT 0

main() {
    
    int c, state;
    state = OUT;

    while ((c = getchar()) != EOF) {

        if ((c == '\n') || (c == ' ') || (c == '\t')) {
	    if (state == OUT) continue;
	    else {
		printf("\n");
		state = OUT;
	    }
	}
	else {
	    printf("%c", c);
	    state = IN;
        } 
    }
}

