#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n;
  scanf("%d", &n);
  int a = 1, b = 1;
  double sum = 0;
  char flag = -1;
  for (int i; i < n; i++) {
    sum += (flag = -flag) * (double)(1 + i) / (1 + 2 * i);
  }
  printf("%.3lf", sum);
  return 0;
}