#include <stdio.h>

main() {
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i <10; i++)
        ndigit[i] = 0;

    while ((c = getchar()) != 'C')
        if (c >= '0' && c <= '9') //if the character C is a number character
            ++ndigit[c-'0'];      //the numeric value represented by the character is calculated, by taking the offest ('0' in this case) of the character-set away from the total value (e.g. '9' will become int value 9)
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;

    printf("digits =");
    for (i = 0; i <10; i++)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);
}
