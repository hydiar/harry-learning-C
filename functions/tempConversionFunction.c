#include <stdio.h>

#define LOWER   0   //lower table limit
#define UPPER   300 //upper table limit
#define STEP    20  //table step size

float fToC(int f);

int main() {
    printf("%5s\t->\t%12s\n", "Fahrenheit", "Celsius");
    for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("\t%3d\t\t->\t\t %6.1f\n", fahr, fToC(fahr));
    return 0;
}

float fToC(int fahr) {
    return (5.0/9.0)*(fahr-32);
}
