/* #include <stdio.h>

print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

/*int main() { //fahrenheit to celsius
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%5s\t->\t%12s\n", "Fahrenheit", "Celsius");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("\t%3.0f F\t->\t\t%6.2f C\n", fahr, celsius);
        fahr = fahr + step;
    }
}


int main() { //celsius to fahrenheit
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 150;
    step = 10;

    celsius = lower;
    printf("\t%5s\t->%12s\n", "Celsius", "Fahrenheit");
    while (celsius <= upper) {
        fahr = celsius / (5.0/9.0) + 32;
        printf("\t%3.0f C\t->\t%6.2f C \n", celsius, fahr);
        celsius += step;
    }
}

//print Fahrenheit-Celsius table iterated
/*main() {
    printf("%5s\t->\t%12s\n", "Fahrenheit", "Celsius");
    for (int fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("\t%3d\t\t->\t\t %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

//print reverse Fahrenheit-Celsius table iterated
main() {
    printf("%5s\t->\t%12s\n", "Fahrenheit", "Celsius");
    for (int fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("\t%3d\t\t->\t\t %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
*/
#include <stdio.h>

#define LOWER   0   //lower table limit
#define UPPER   300 //upper table limit
#define STEP    20  //table step size

main() {
    printf("%5s\t->\t%12s\n", "Fahrenheit", "Celsius");
    for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("\t%3d\t\t->\t\t %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
