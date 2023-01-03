#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Change integer to float
    float fahr, celcius;
    int lower = 0, step = 20, upper = 300;

    fahr = lower;

    while (fahr <= upper)
    {
        celcius = (5.0 / 9.0) * (fahr - 32.0);

        printf("%3.0f %6.1f\n", fahr, celcius);

        fahr += step;
    }

    return 0;
}
