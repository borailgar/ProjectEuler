#include <stdio.h>
#include <stdlib.h>

int main()
{
unsigned int a1 = 1, a2 = 1, a3 = 2, sum = 0;

  while (a3 < 4000000) {
    a3 = a1 + a2;
    sum += a3 * !(a3%2); // !(a3%2) equal 1; (a3%2) equal 0;
    a1 = a2;
    a2 = a3;
  }

  printf("%u\n ", sum);
    return 0;
}
