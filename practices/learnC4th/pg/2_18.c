#include <stdio.h>
double fact(int n) {
  if (n <= 1) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}
int main(int argc, char const *argv[]) {
  int m, n;
  scanf("%d %d", &m, &n);
  printf("result = %.0lf", fact(n) / (fact(m) * fact(n - m)));
  return 0;
}
