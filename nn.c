
#include <stdio.h>

void change_value(int ar[], int N, int L, int R) {
  for (int i = L; i <= R; i++) {
    ar[i] = 0;
  }
}

void main () {
  int n;
  printf("Enter the length of the array: ");
  scanf("%d", &n);
  int ar[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &ar[i]);
  }
  int L, R;
  printf("Enter the indices (L R) of the array to be changed: ");
  scanf("%d %d", &L, &R);
  change_value(ar, n, L, R);
  for (int i = 0; i < n; i++) {
    printf("%d ", ar[i]);
  }
  printf("\n");
}
