#include <stdio.h>
#include<time.h>

int binarySearch(int array[], int x, int low, int high) {

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main() {
  int arr[] = {1, 20, 30, 12, 45, 25, 60, 30};
  int x = 30;
  int initTime = clock();
  int index = binarySearch(arr, x, 0, 9);
  int finalTime = clock();
  printf("%d\n", finalTime - initTime);
  if (index == -1) {
    printf("Element not found\n");
  } else {
    printf("Element found at index: %d\n", index);
  }

  return 0;
}