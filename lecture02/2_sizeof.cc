#include <stdio.h>

int main()
{
  size_t int_size = sizeof(int);
  size_t double_size = sizeof(double);
  size_t float_size = sizeof(float);

  printf("%zd %zd %zd\n", int_size, double_size, float_size );

  return 0;
}
