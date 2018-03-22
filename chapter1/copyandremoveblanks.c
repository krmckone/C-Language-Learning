/*
 * Author: Kaleb Robert McKone
 * Date: 3-22-2018
 * Practice program that replaces each string of one or more blanks with a 
 * single blank.
 * WORK IN PROGRESS, NOT WORKING
 */

#define MAX_SPACE_COUNT 1
#include <stdio.h>

char character;
int spacecount;

main() {

    while ((character = getchar()) != EOF) {
        while (character != '\n') {
	    spacecount = 0;
            while (character == ' ') {
	        if (spacecount > 0) {
	            character = '';
	        } 
	        else ++spacecount;
            } 
        }

        printf("%s\n", character);
    } 
}


