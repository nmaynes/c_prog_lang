//
// Created by nathan on 4/6/20.
//

#include <stdio.h>

#define IN 1    /* Inside a word */
#define OUT 0   /* Outside a word */

int main()
{
    int c, state;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\b') {
            state = OUT;
        }
        else if (state == OUT){
            state = IN;
            putchar('\n');
            putchar(c);
        }
        else
            putchar(c);
    }
}
