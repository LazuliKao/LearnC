#include <stdio.h>
int main(int argc, char const *argv[]) {
  int count = 0;
  scanf("%d", &count);
  int sum = 0;
  int countAbove60 = 0;
  for (int i = 0; i < count; i++) {
    int score;
    scanf("%d", &score);
    sum += score;
    if (score >= 60) {
      countAbove60++;
    }
  }
  printf("average = %.1lf\n", (double)sum / (count ? count : 1));
  printf("count = %d", countAbove60);
  return 0;
}