#include <stdio.h>
int main(int argc, char const *argv[]) {
  int grade;
  scanf("%d", &grade);
  switch (grade / 10) {
  case 10:
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    default:
        printf("E");
  }
  return 0;
}