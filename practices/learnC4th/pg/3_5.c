#include <stdio.h>
int main(int argc, char const *argv[]) {
  int year;
  scanf("%d", &year);
  if (year <= 2000 || year > 2100) {
    printf("Invalid year!");
    return 0;
  }
  char find = 0;
  for (int i = 2001; i <= year; i++) {
    if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
      printf("%d\n", i);
      find = 1;
    }
  }
  if (!find) {
    printf("None");
  }
  return 0;
}