#include <stdio.h>

int main(int argc, char const *argv[])
{
    float fahr, celcius;
    int lower = 0, step = 20, upper = 300;

    celcius = lower;

    printf("Celcius\tFahrenheit\n");

    while (celcius <= upper)
    {
        fahr = (9.0/5.0) * celcius + 32.0;

        printf("%7.0f\t%8.0f\n", celcius, fahr);

        celcius += step;
    }

    return 0;
}
