#include <stdio.h>

int main() {
  int n;
  printf("Enter no of elements: ");
  scanf(" %d", &n);
  int arr[n];

  printf("Enter elements of array: \n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int max = arr[0], secMax = -1, min = arr[0], secMin = -1;

  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      secMax = max;
      max = arr[i];
    } else if (arr[i] > secMax && arr[i] != max) {
      secMax = arr[i];
    }

    if (arr[i] < min) {
      secMin = min;
      min = arr[i];
    } else if (arr[i] < secMax && arr[i] != min) {
      secMin = arr[i];
    }
  }

  if (secMin == -1) {
    printf("Second smallest element does not exists ");
  } else {
    printf("Second smallest element: %d\n", secMin);
  }

  if (secMax == -1) {
    printf("Second largest element does not exists \n");
  } else {
    printf("Second largest element: %d\n", secMax);
  }
}