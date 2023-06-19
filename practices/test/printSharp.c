#include <stdio.h>
int main(int argc, char const *argv[]) {
  for (int i = 14; i > 1; i /= 3) {
    printf("%d#", i);
  }
  return 0;
}