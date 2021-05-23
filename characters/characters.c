#include <stdio.h>

/*
main() {
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}


main() { //repeats characters typed back in console
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}


main() { //counts the number of input chars
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}


main() { //counts the number of input chars
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}

main() { //counts lines of input
    int c, nl; //c, current character; nl, number of lines

    nl = 0;
    while((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        printf("%d\n", nl);
}


main() { //counts blanks (spaces), tabs and newline characters separately
    int c, ns, nt, nl;

    nl = 0;
    nt = 0;
    ns = 0;

    while((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c == ' ')
            ++ns;
        else if (c == '\t')
            ++nt;
        printf("newlines: %d\n", nl);
        printf("tabs: %d\n", nt);
        printf("spaces: %d\n", ns);
}

main() { //prints string with removed duplicate spaces
    int output, c, lastc;

    while((c = getchar()) != EOF) {
        if (lastc == ' ' && c == ' ')
            ;
        else
            putchar(c);
        lastc = c;
    }
}


main() { // replace tabs, / and backspaces with their explicit character codes
    int c;
    while((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        else if (c == '\\' )
            printf("\\");
        else if (c == '\b')
            printf("\\b");
        else
            putchar(c);
    }
}
 */

#define IN 1 // inside a word
#define OUT 0 // outside a word

main() { //count lines, words and characters from input. Also prints the output with words separated on new lines
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (state == IN) {
            putchar(c);
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            putchar('\n');
        }
        else if (state == OUT) {
            putchar(c);
            state = IN;
            ++nw;
        }

    }
    printf("%d %d %d\n", nl, nw, nc);
}
