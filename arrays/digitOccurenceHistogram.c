#include <stdio.h>
#define IN 1 // inside a word
#define OUT 0 // outside a word

main() {
    int c, i, current, state;
    int wordLengths[20];

    state = OUT;
    current = 0;

    for (i = 0; i <20; i++)
        wordLengths[i] = 0;

    printf("Write up to 10 words: \n");
    while ((c = getchar()) != 'C') {
        if (state == IN)
            ++wordLengths[current];

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            ++current;
        } else if (state == OUT) {
            state = IN;
        }
    }

    printf("Histogram of word lengths\n");
    int j;
    for (i = 0; i <20; i++)
        if (wordLengths[i] == 0)
            ;
        else {
            for (j = 0; j< wordLengths[i]; j++)
                putchar('=');
                putchar('\n');
        }
}