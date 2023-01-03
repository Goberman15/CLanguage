#include <stdio.h>

int main(int argc, char const *argv[])
{
    float fahr, celcius;
    int lower = 0, step = 20, upper = 300;

    fahr = lower;

    printf("Fahr\tCelcius\n");

    while (fahr <= upper)
    {
        celcius = (5.0 / 9.0) * (fahr - 32.0);

        printf("%4.0f\t%7.1f\n", fahr, celcius);

        fahr += step;
    }

    return 0;
}
