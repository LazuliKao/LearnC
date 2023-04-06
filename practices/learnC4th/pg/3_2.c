#include <stdio.h>
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  int sign = 0;
    if (n > 0) {
        sign = 1;
    } else if (n < 0) {
        sign = -1;
    }
    printf("sign(%d) = %d", n, sign);
  return 0;
}