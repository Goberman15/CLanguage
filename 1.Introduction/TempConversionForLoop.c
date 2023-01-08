#include <stdio.h>

int main(int argc, char const *argv[])
{
  for (int fahr = 0; fahr <= 300; fahr += 20)
  {
    float celcius = (5.0 / 9.0) * (fahr - 32);
    printf("%3d %6.1f\n", fahr, celcius);
  }

  return 0;
}
