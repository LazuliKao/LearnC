#include <math.h>
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n = 0;
  scanf("%d", &n);
  double sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += sqrt(i);
  }
  printf("sum = %.2lf", sum);
  return 0;
}