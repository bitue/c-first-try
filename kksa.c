
#include <stdio.h>

void main() {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  int arr[size];

  int *pArrSlot = &arr[0];
  for(int i = 0; i < size; i++) {
    scanf("%d", pArrSlot);
    pArrSlot++;
  }

  printf("\nArray element in reverse order:\n");
  pArrSlot = &arr[size-1];
  for (int i = 0; i < size; i++) {
    printf("%d ", *pArrSlot);
    pArrSlot--;
  }
}
