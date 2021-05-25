#include <stdio.h>

int power(int m, int n); //function prototype
int main() {
    int i;
    for (i = 0; i < 10; ++i)
        printf("2 to the power of %d = %4d\t|\t-3 to the power of %d =\t%6d\n", i, power(2, i), i, power(-3, i));
    return 0;
}

int power(int base, int n) {
    int i, p;

    p = 1;
    for (i = 1; i<=n; i++)
        p = p * base;
    return p;
}
