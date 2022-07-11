#include <stdio.h>

void printChar(char ch[], int n) {
  for (int i = 1; i <= n; i++) {
    printf("%s", ch);
  }
  printf("\n");
}

void main () {
  int n;
  printf("Enter the max length of the pyramid: ");
  scanf("%d", &n);
  int rows = n * 2 - 1;
  for (int i = 1, j = rows; i <= rows; i++, j--) {
    int iterator = i > n ? j : i;
    printChar("* ", iterator);
  }
}
