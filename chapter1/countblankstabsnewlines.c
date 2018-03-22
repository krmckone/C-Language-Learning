/* Author: Kaleb Robert McKone
*  Date: 3-22-2018
*  Practice program that ocunts blanks, tabs, and new lines.
*/

#include <stdio.h>

main() {
    
    int blanks, tabs, newlines;
    int character;
    
    blanks = 0;
    tabs = 0;
    newlines = 0;

    while ((character = getchar()) != EOF) {

        if(character == ' ') {
            blanks++;
        }

        if(character == '\t') {
	    tabs++;
	}

        if(character == '\n') {
    	    newlines++;
	}

	printf("Blanks  Tabs  Newlines\n");
        printf("  %d     %d     %d\n", blanks, tabs, newlines);
    }
}

