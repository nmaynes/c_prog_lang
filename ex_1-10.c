//
// Created by nathan on 4/6/20.
//

#include <stdio.h>

/* Replace tabs, backspaces, and backslashes with \t, \b, \\ */

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b') {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\'){
            putchar('\\');
            putchar('\\');
        }
        else
            putchar(c);
    }
}