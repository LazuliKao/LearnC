#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n;
  scanf("%d", &n);
  int sum = 0;
  int fact = 1;
  for (int i = 1; i <= n; i++) {
    sum += (fact *= i);
  }
  printf("%d", sum);
  return 0;
}