#include <stdio.h>

int power(int m, int n); //function prototype
int main() {
    int i;
    for (i = 0; i < 10; ++i)
        printf("2 to the power of %d = %4d\t|\t-3 to the power of %d =\t%6d\n", i, power(2, i), i, power(-3, i));
    return 0;
}

int power(int base, int n) { //the value of n is called by value, not by reference. A local copy is used in power() function.
    int p;
    for(p = 1; n > 0; --n)
        p = p * base;
    return p;
}
}
