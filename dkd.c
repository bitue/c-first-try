#include<stdio.h>
#include <string.h>

void stringCat(char a[], char b[], char out[]) {
  strcat(out, strcat(a, b));
}



void makeNArray(int n, int squares[]) {
  for (int i = 1; i <= n; i++) {
    squares[i-1] = i*i;
  }
}
