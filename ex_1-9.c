//
// Created by nathan on 4/6/20.
//

#include <stdio.h>

#define IN 1  /* processing extra spaces */
#define OUT 0 /* not processing extra spaces */

int main() {
    int c, previousc;

    previousc = EOF;
    while ((c = getchar()) != EOF) {

        if (c == ' ') {
            if (previousc != c)
                putchar(c);
        }
        else
            putchar(c);

        previousc = c;
    }
    return 0;
}