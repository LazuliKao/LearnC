#include <math.h>
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int m, n;
  scanf("%d%d", &m, &n);
  double sum = 0;
  for (int i = m; i <= n; i++) {
    sum += pow(i, 2) + 1.0 / i;
  }
  printf("sum = %.6lf", sum);
  return 0;
}