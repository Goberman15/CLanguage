#include <stdio.h>

#define START 0
#define STEP 20
#define STOP 300

int main(int argc, char const *argv[])
{
  for (int fahr = START; fahr <= STOP; fahr += STEP)
  {
    float celcius = (5.0 / 9.0) * (fahr - 32);
    printf("%3d %6.1f\n", fahr, celcius);
  }

  return 0;
}
