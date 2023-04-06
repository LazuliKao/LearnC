#include <stdio.h>
int main(int argc, char const *argv[]) {
  int val;
  scanf("%d", &val);
  double cost = val * .53;
  if (val > 50) {
    cost += (val - 50) * .05;
  }
  if (cost <= 0) {
    printf("Invalid Value!");
  }else {
  printf("cost = %.2lf", cost);
  }
  return 0;
}